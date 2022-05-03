## Static and dynamic library, building project using makefile

### Static library

main.c use extern function from static library.

build: 

    make static

run: 

    ./result

clean libraries, object files: 

    make clean

### IMPORTANT

Further we will use dynamic library. When we get dynamic library file, programm can't find it.
We should run in command line, so we add path to out dynamic library: 

    LD_LIBRARY_PATH=`pwd`:\${LD_LIBRARY_PATH}
    export LD_LIBRARY_PATH

### Dynamic library, that are loaded during compilation

main.c use extern function from dynamic library.

build: 

    make dynamic

run: 

    ./result

clean libraries, object files: 

    make clean

### Dynamic library, that are loaded when programm is running

main.c use function from dynamic library.

build: 

    make dynamicLoading

run: 

    ./result

clean libraries, object files: 

    make clean





