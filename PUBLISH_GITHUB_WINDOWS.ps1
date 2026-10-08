# Run this from the unzipped C-Pattern-Printing-Notes directory.
# Requires Git and GitHub CLI (gh) installed.
$ErrorActionPreference = 'Stop'
if (-not (Get-Command git -ErrorAction SilentlyContinue)) { throw 'Install Git first: https://git-scm.com/downloads' }
if (-not (Get-Command gh -ErrorAction SilentlyContinue)) { throw 'Install GitHub CLI first: https://cli.github.com/' }
gh auth status
if ($LASTEXITCODE -ne 0) { gh auth login }
if (-not (Test-Path '.git')) { git init }
git add .
git commit -m 'Add C pattern printing study notes'
if ($LASTEXITCODE -ne 0) { Write-Host 'No new changes to commit (or Git identity not configured).' }
gh repo create c-pattern-printing-notes --public --source=. --remote=origin --push
