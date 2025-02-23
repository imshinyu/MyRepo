# Normal Mode (Default Mode)

Press `Esc` to enter Normal mode from any other mode.

### Navigation

- `h` → Move left
- `l` → Move right
- `j` → Move down
- `k` → Move up
- `0` → Move to the beginning of the line
- `^` → Move to the first non-blank character of the line
- `$` → Move to the end of the line
- `gg` → Go to the beginning of the file
- `G` → Go to the end of the file
- `Ctrl-d` → Scroll down half a page
- `Ctrl-u` → Scroll up half a page
- `Ctrl-f` → Scroll down a full page
- `Ctrl-b` → Scroll up a full page
- `w` → Jump forward to the beginning of a word
- `b` → Jump backward to the beginning of a word
- `e` → Jump forward to the end of a word
- `{` → Jump up by paragraph
- `}` → Jump down by paragraph
- `%` → Jump to matching bracket

### Editing

- `i` → Enter Insert mode before the cursor
- `I` → Enter Insert mode at the beginning of the line
- `a` → Enter Insert mode after the cursor
- `A` → Enter Insert mode at the end of the line
- `o` → Open a new line below and enter Insert mode
- `O` → Open a new line above and enter Insert mode
- `r<char>` → Replace a single character
- `R` → Enter Replace mode (overwrite text)
- `J` → Join the current line with the next line
- `xp` → Swap two adjacent characters
- `~` → Toggle the case of the character under the cursor
- `ciw` → Change the current word
- `c$` → Change from cursor to end of line
- `cc` → Change the whole line

### Deleting & Cutting

- `x` → Delete (cut) a character
- `X` → Delete (cut) the character before the cursor
- `dd` → Delete (cut) a line
- `D` → Delete from the cursor to the end of the line
- `dw` → Delete a word
- `d$` → Delete to the end of the line
- `dG` → Delete everything from the current line to the end of the file
- `dgg` → Delete everything from the current line to the start of the file
- `d{motion}` → Delete from the cursor to where the motion moves

### Copy & Paste

- `yy` → Copy (yank) a line
- `Y` → Copy (yank) a line (same as `yy`)
- `yw` → Copy a word
- `y$` → Copy to the end of the line
- `p` → Paste after the cursor
- `P` → Paste before the cursor
- `"+y` → Copy to system clipboard (requires clipboard support)
- `"+p` → Paste from system clipboard

### Undo & Redo

- `u` → Undo
- `Ctrl-r` → Redo

### Searching

- `/text` → Search forward for "text"
- `?text` → Search backward for "text"
- `n` → Repeat the search forward
- `N` → Repeat the search backward
- `*` → Search for the word under the cursor (forward)
- `#` → Search for the word under the cursor (backward)
- `:%s/old/new/g` → Replace all occurrences of "old" with "new"

## Visual Mode (For Selecting Text)

Press `v`, `V`, or `Ctrl-v` to enter Visual mode.

### Selecting Text

- `v` → Character-wise selection
- `V` → Line-wise selection
- `Ctrl-v` → Block selection
- `o` → Move to the other end of the selection
- `aw` → Select a word
- `ab` → Select a block including parentheses
- `aB` → Select a block including braces
- `a"` → Select a quoted string

### Editing in Visual Mode

- `d` → Delete selection
- `y` → Yank (copy) selection
- `>` → Indent selection
- `<` → Unindent selection
- `U` → Convert selection to uppercase
- `u` → Convert selection to lowercase
- `g~` → Toggle case of selection
- `c` → Change selection (delete and enter Insert mode)
- `r<char>` → Replace selection with a character

### Exiting Visual Mode

- `Esc` → Return to Normal mode

### Registers

- `:reg` → Show all registers
- `"ay` → Yank into register `a`
- `"ap` → Paste from register `a`

### Macros

- `q<char>` → Start recording a macro into register `char`
- `q` → Stop recording
- `@<char>` → Execute the macro stored in register `char`
- `@@` → Repeat the last executed macro

# Insert Mode (Typing Mode)

Press `i`, `I`, `a`, `A`, `o`, or `O` to enter Insert mode.

### Exiting Insert Mode

- `Esc` → Return to Normal mode
- `Ctrl-[` → Alternative way to return to Normal mode

# Replace Mode (Overwrite Text)

Press `R` to enter Replace mode.

### Exiting Replace Mode

- `Esc` → Return to Normal mode

# Command-Line Mode (For Commands)

Press `:` to enter Command mode.

### Common Commands

- `:w` → Save
- `:q` → Quit (if no unsaved changes)
- `:q!` → Quit without saving
- `:wq` → Save and quit
- `ZZ` → Save and quit (same as `:wq`)
- `ZQ` → Quit without saving (same as `:q!`)
- `:noh` → Clear search highlights
- `:set number` → Show line numbers
- `:set nonumber` → Hide line numbers
- `:set relativenumber` → Show relative line numbers

# Splits & Tabs

### Splitting Windows

- `:split` or `:sp` → Split window horizontally
- `:vsplit` or `:vsp` → Split window vertically
- `Ctrl-w w` → Switch between splits
- `Ctrl-w h/j/k/l` → Move between splits
- `Ctrl-w c` → Close the current split

### Tabs

- `:tabnew` → Open a new tab
- `gt` → Go to the next tab
- `gT` → Go to the previous tab
- `:tabclose` → Close the current tab
- `:tabs` → List open tabs

# Marks

- `m<char>` → Set mark `char`
- `` `<char>` `` → Jump to mark `char`
- `d` `<char>` → Delete up to mark `char`