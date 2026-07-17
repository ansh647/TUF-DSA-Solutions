@echo off
set /p problem="Enter problem name: "
git add .
git commit -m "Solved: %problem%"
git push origin main
echo 🎉 Successfully uploaded %problem% to GitHub!