# C Pattern Printing Notes 🧩

A VS Code-friendly collection of **30 standalone C programs** reconstructed from the pattern examples and homework prompts in `COneShotPart4.pdf`. Each `.c` file contains a `main()` and can be opened, edited and run independently.

> **Important:** The uploaded document is a slide deck of diagrams, handwritten explanations, partial code, and homework questions—not 30 complete copyable C files. These are **new solutions based on the displayed patterns**, not a verbatim transcription. Compare against the PDF when exact spacing matters.

## Folder structure

```text
C-Pattern-Printing-Notes/
├── 01_basics/       # rectangles and squares
├── 02_triangles/    # stars, numbers, alphabet, Floyd, 0/1
├── 03_shapes/       # +, X, hollow, hashes, rhombus
├── 04_pyramids/     # centered pyramids and diamond
├── 05_advanced/     # wings and concentric square
├── source/          # attribution and reference information
└── .vscode/         # editor preferences
```

## Run a note in VS Code

Open this folder in VS Code, open a `.c` file and use its terminal:

```bash
gcc 02_triangles/05_star_triangle.c -o pattern
./pattern
```

On Windows (PowerShell), replace `./pattern` with `./pattern.exe`. Change `n`, `rows`, or `cols` at the top of `main()` to experiment. Install a C compiler such as GCC if needed.

## Quick GitHub publish

**Option A: Browser, no Git required:** create a new empty GitHub repository → **Add file → Upload files** → drag the **unzipped project contents** into GitHub → **Commit changes**. GitHub browser upload has size/count limits; the CLI option is more reliable for folders.

**Option B: GitHub CLI, fastest if already signed in:**

```bash
cd C-Pattern-Printing-Notes
gh auth login
gh repo create c-pattern-printing-notes --public --source=. --remote=origin --push
```

If the CLI says the directory is not a Git repository, run `git init`, `git add .`, and `git commit -m "Add C pattern notes"` first, then repeat the `gh repo create` command.

## Attribution

Study patterns are based on the user-provided `COneShotPart4.pdf`. The slide deck shows a skills-course watermark; original material belongs to its respective creator. The original PDF is **not included** in this publishing starter pack, to avoid redistributing third-party material without permission.
