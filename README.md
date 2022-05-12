#### Eltex module 5

### This repository will contain tasks related to Linux.

It contains 4 different folders and each folder will have its own task. Each folder has its own README file, which contains instructions for compiling and running programs, as well as the task they perform.

Below are also the objectives of each practice.



#### [Practice 1](https://github.com/dima-paryshkov/elt_m5_static_and_dynamic_library_makefile)

Creation of a static, dynamic library. For the dynamic library, two options for working are considered: linking at the build stage and using the library while the program is running.

#### [Practice 2](https://github.com/dima-paryshkov/elt_m5_kernel_module)

Creating a simple kernel module and building it using a makefile. The module represents the possibility of using a memory area into which a string can be written and read.

#### [Practice 3](https://github.com/dima-paryshkov/elt_m5_driver)

Working with sysfs, netlink and chardev:

sysfs: module, that control leds on your keyboard.

chardev: example of character device.

netlink: This is a client server application. The server is a kernel module, and the client is a user-space program. Communication occurs through a socket with the type AF_NETLINK (communication between kernel and user space). You send a message, the server responds with a greeting, your call number, and an echo response to your message.

#### [Practice 4](https://github.com/dima-paryshkov/elt_m5_pthreads)

Working with posix threads.

Winnie the Pooh and bees. A given number of bees extract honey in equal portions, lingering on the way for a random time.
Winnie the Pooh consumes honey in portions of a given size for a given time and can live the same amount of time without food.
The work of each bee is implemented in the generated process.

Other work with posix threads: 

1. [Simple server and client TCP/IP](https://github.com/dima-paryshkov/elt_m3_network)
2. [High load server with pool threads](https://github.com/dima-paryshkov/highLoadServer)

##### Attention

Each task has its own repository. This repository was created solely for ease of use by all means at once. The assignment repository is available via hyperlink for each practice.