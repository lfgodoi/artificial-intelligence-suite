## Artificial Intelligence Suite (artificial-intelligence-suite)

Low-level implementation and demonstration of multiple artificial intelligence methods.

- Developer: _Leonardo Franco de Godói_
- GitHub profile: https://github.com/lfgodoi_
- Contact: _eng.leonardogodoi@gmail.com_

### Project structure

The project repository contains the following folders.

- _./include/_: public header files with algorithm definitions.
- _./src/_: private source files with algorithm implementations.
- _./tests/_: test files.
- _./lib/_: third party libraries.
- _./build/_: build directory where the build artifacts will be stored.
- _./CMakeLists.txt_: the main CMake configuration file that defines the project and its build rules.

### Building a single executable file

In order to build an executable file, run the following command.

    g++ ./src/<code>.cpp -o ./build/<executable-file>

### Building all executable files

If you want to build the executable files all at once, run the following sequence of commands.

    mkdir -p ./build && cmake -B./build -S. && cmake --build ./build

### Running an executable file

The executable files are created into _./build/_ directory. You can run them by using the following command.

    ./build/<executable-file>
