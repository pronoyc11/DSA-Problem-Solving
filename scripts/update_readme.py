import os
import re

root = "."

# Platform stats
stats = {
    "Codeforces": 0,
    "LeetCode": 0,
    "CodeChef": 0
}

# Problems grouped by platform
problems_by_platform = {
    "Codeforces": [],
    "LeetCode": [],
    "CodeChef": [],
    "Custom": []
}

# Difficulty stats
difficulty_stats = {
    "Easy": 0,
    "Medium": 0,
    "Hard": 0
}

# Traverse files
for folder, _, files in os.walk(root):
    for file in files:
        if file.endswith(".cpp"):
            path = os.path.join(folder, file)

            with open(path, "r", encoding="utf-8") as f:
                content = f.read()

                problem = re.search(r'Problem:\s*(.*)', content)
                platform = re.search(r'Platform:\s*(.*)', content)
                topic = re.search(r'Topic:\s*(.*)', content)
                difficulty = re.search(r'Difficulty:\s*(.*)', content)
                link = re.search(r'Link:\s*(.*)', content) #added by p1
                if problem and platform and topic:
                    name = problem.group(1).strip()
                    plat = platform.group(1).strip()
                    topic = topic.group(1).strip()

                    # Platform count
                    if plat in stats:
                        stats[plat] += 1

                    # Store problem
                    if plat in problems_by_platform:
                        problem_link = link.group(1).strip() if link else "#"
                        problems_by_platform[plat].append((name, topic, problem_link))#added by p1

                    # Difficulty count
                    if difficulty:
                        diff = difficulty.group(1).strip()
                        if diff in difficulty_stats:
                            difficulty_stats[diff] += 1


# ================= WRITE README =================

with open("README.md", "w", encoding="utf-8") as f:

    # BIO SECTION
    f.write("# 👨‍💻 Pronoy Chowdhury Pothik\n\n")
    f.write("## 🎓 Qualification\n")
    f.write("- CSE Graduate\n\n")

    f.write("## 💡 Skills\n")
    f.write("- Web Developer\n")
    f.write("- App Developer\n\n")

    f.write("## 🔗 Profiles\n")
    f.write("- Codeforces: (will be added later)\n")
    f.write("- LeetCode: (will be added later)\n")
    f.write("- CodeChef: (will be added later)\n\n")

    # 📊 STATS
    f.write("## 📊 DSA Stats\n")
    for k, v in stats.items():
        f.write(f"- {k}: {v}\n")

    total = sum(len(v) for v in problems_by_platform.values())
    f.write(f"\n- Total Problems: {total}\n\n")

    # 📊 DIFFICULTY GRAPH
    f.write("## 📈 Difficulty Distribution\n")
    for k, v in difficulty_stats.items():
        bar = "█" * v
        f.write(f"- {k}: {bar} ({v})\n")
    f.write("\n")

    # 📚 PROBLEMS
    f.write("## 📚 Problems Solved by me PlatformWise\n\n")

    for platform, plist in problems_by_platform.items():
        f.write(f"### {platform}\n")

        if len(plist) == 0:
            f.write("- No problems yet\n")
        else:
            for name, topic, problem_link in plist:
                f.write(f"- [{name}]({problem_link}) | {topic}\n")

        f.write("\n")