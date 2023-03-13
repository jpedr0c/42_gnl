<p align="center">
<a href="https://github.com/jpedr0c/42_gnl">
<img src="./get_next_line.png" height="120" width="120">
</a>
</p>
<h1 align=center>
  <strong> Get_next_line </strong>
</h1>

<p align="center">
  <sub> Get_next_line is a function that reads a file descriptor line by line.
  <sub>
</p>

[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)](#table-of-contents)

<p align="center">
  <a href="#About"> 💡 About the project </a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#AboutFunction"> 📝 About function</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#HowUse"> ⚙️ How to use</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#Observation"> ⚠️ Observation</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#Credits"> 🏆 Credits</a>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

<br/>

<a id="About"></a>
## 💡 About the project
> The function takes a file descriptor as a parameter and returns a line from the file associated with that descriptor. The function reads the file line by line until the end of the file is reached, or until a newline character is encountered.

<br/>

<a id="AboutFunction"></a>
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

<br/>

<a id="HowUse"></a>
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

<br/>

<a id="Observation"></a>
## ⚠️ Observation
This project is for educational purposes only and should not be used in production. Also, some of these functions may not be optimized or follow the latest C language standards. Therefore, use them with caution.

<br/>

<a id="Credits"></a>
## 🏆 Credits
| [<img src="https://avatars.githubusercontent.com/u/78514252?v=4" width="300" style="border-radius:50%"><br><sub> João Pedro </sub>](https://www.linkedin.com/in/jpedroc) | <p align="justify">***Thank you for taking the time to review my project. If you have any questions or would like to connect with me, please feel free to reach out to me on [LinkedIn](https://www.linkedin.com/in/jpedroc)***</p> | 
|---|---|
