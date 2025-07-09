# 📄 Dynamic String Reader in C

A lightweight and efficient C program for **dynamically reading strings of arbitrary length** from standard input. This project demonstrates safe memory allocation and resizing techniques while handling strings in C.

---

## 🚀 Features

- Read strings of **unknown and unlimited length**.
- Handles **memory allocation** dynamically using `malloc` and `realloc`.
- Minimal and portable ANSI C code.
- Robust and easy-to-understand logic.
- Gracefully handles memory errors.

---

## 📋 How It Works

1. Starts with an initial buffer.
2. Reads characters from `stdin` until a newline (`\n`) or EOF is encountered.
3. Automatically resizes the buffer if needed.
4. Stores the full string safely in memory.

---

## 📦 Files

| File              | Description                               |
|-------------------|-------------------------------------------|
| `dread.c`         | Main source code file with implementation |
| `dread.h`         | Header file for the source                |
| `README.md`       | Project documentation (this file)         |

---

## 🛠️ Usage


Stand-alone compiling... 
------
```bash
gcc -o dread dread.c
```
------
Compiling with other projects...
------
Example project structure:

```
your_project/
│
├── main.c                       // Your main program
├── dynamic_string/              // Directory for string reader module
│   ├── dread.c                  // String reader implementation
│   └── dread.h                  // Header file
└── README.md
```

Compilation example:
```bash
gcc -o main main.c dynamic_string/dread.c -Idynamic_string
```
- Relative path of the dynamic string reader header is not required while compiling like this
 




