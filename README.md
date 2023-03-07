<h1 align=center>
  <strong> GNL </strong>
</h1>

## 💡 About the project
> The function takes a file descriptor as a parameter and returns a line from the file associated with that descriptor. The function reads the file line by line until the end of the file is reached, or until a newline character is encountered.


## 📝 About function

### Function signature
```c
int get_next_line(int fd);
```

### Parameter
- `fd` -> The file descriptor of the file to read.

### Return value
- Return `1` if a line has been read successfully.
- Return `0` if the end of the file has been reached.
- Return `-1` if an error occurs.

### Limitations
> The function has a buffer size of `BUFFER_SIZE`, which is defined in the `get_next_line.h` header file. If a line is longer than `BUFFER_SIZE`, the function will read the line multiple iterations. It's also not thread safe, so it shouldn't be used in a multithreaded proper synchronization.

## ⚙️ How to use

1. Clone this repository in your project directory
```sh
git clone https://github.com/jpedr0c/42_gnl.git
```
2. Include the library in your code
```c
#include "42_gnl/get_next_line.h"
```
3. Finally, compile the source files along with your code

## ⚠️ Notes
This project is for educational purposes only and should not be used in production. Also, some of these functions may not be optimized or follow the latest C language standards. Therefore, use them with caution.
