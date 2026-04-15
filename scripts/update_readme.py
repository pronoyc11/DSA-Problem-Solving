import os
import re

root = "."
stats = {
    "Codeforces": 0,
    "LeetCode": 0,
    "CodeChef": 0
}

problems_by_platform = {
    "Codeforces": [],
    "LeetCode": [],
    "CodeChef": []
}

for folder, _, files in os.walk(root):
    for file in files:
        if file.endswith(".cpp"):
            path = os.path.join(folder, file)

            with open(path, "r", encoding="utf-8") as f:
                content = f.read()

                problem = re.search(r'Problem:\s*(.*)', content)
                platform = re.search(r'Platform:\s*(.*)', content)
                topic = re.search(r'Topic:\s*(.*)', content)

                if problem and platform and topic:
                    name = problem.group(1).strip()
                    plat = platform.group(1).strip()
                    topic = topic.group(1).strip()

                    if plat in stats:
                        stats[plat] += 1

                    if plat in problems_by_platform:
                        problems_by_platform[plat].append((name, topic))

# Write README
with open("README.md", "w", encoding="utf-8") as f:
    f.write("# 📊 DSA Problem Tracker\n\n")

    f.write("## 🔥 Stats\n")
    for k, v in stats.items():
        f.write(f"- {k}: {v}\n")
    total = sum(len(v) for v in problems_by_platform.values())
    f.write(f"\n- Total Problems: {total}\n\n")

    f.write("## 📚 Problems by Platform\n\n")

    for platform, plist in problems_by_platform.items():
        f.write(f"### {platform}\n")
        
        if len(plist) == 0:
            f.write("- No problems yet\n")
        else:
            for name, topic in plist:
                f.write(f"- {name} | {topic}\n")
        
        f.write("\n")