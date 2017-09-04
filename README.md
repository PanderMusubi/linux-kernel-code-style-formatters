# Linux Kernel Coding Style Formatters

Here [code style](https://en.wikipedia.org/wiki/Programming_style) formatters
are offered according to the
[Linux Kernel Code Style](https://github.com/torvalds/linux/blob/master/Documentation/process/coding-style.rst)
for [IDE](https://en.wikipedia.org/wiki/Integrated_development_environment)'s
such as [Qt Creator](https://en.wikipedia.org/wiki/Qt_Creator) and
[Eclipse CDT](https://en.wikipedia.org/wiki/Eclipse_(software)). The code style
formatters offered are probably non-optimal.

Any improvements are highly welcomed. Only once these formatters have ben used
for a while without any outstanding issues I would consider asking the
respective IDEs to consider shipping them by default. Note: in the text below
the terms to describe code style formatters are used as similar as the
particular IDE uses them.


# Example code

The files [incorrect.cpp](incorrect.cpp) and [correct.cpp](correct.cpp) contain
respective incorrect and correct code style for C++ according to the Linux
Kernel Code Style. These can be used to test and further improve the code
style formatters offered here.


# Qt Creator

The IDE [Qt Creator](https://www.qt.io/ide) ships the following built-in code
formatters:
* `Qt`
* `GNU`

To install this code style, go in the main menu called `Tools`, choose
`Options…`. Choose `C++` and switch to the tab `Code Style`. Click on `Import…`
to import the file
[qt_c_code-style_linux-kernel.xml](qt_c_code-style_linux-kernel.xml).

After installing `Linux Kernel` will appear in the list of code styles. The
code style chosen here will be the default code style. One can also set project
specific code style.

The code style offered here originates from
https://github.com/Subsurface-divelog/subsurface/blob/master/CodingStyle which
is in Markdown format. This file was used as a starting point for the code
style offered here for Qt Creator.


# Eclipse CDT

The IDE [Eclipse CDT](https://eclipse.org/cdt) ships the following built-in
code formatters:
* `K&R`
* `BSD/Allman`
* `GNU`
* `Whitesmiths`

To install the code style offere here, go in the main menu called `Window`,
choose `Perferences`. Then expand `C/C++` and expand `Code Style`. Choose
`Formatter` and click on `Import…` to import the file
[eclipse_c_code-style_linux-kernel.xml](eclipse_c_code-style_linux-kernel.xml).

After installing `Linux Kernel` will appear in the list of formatters. The
style chosen here will be the default formatter for code style. One can also
set project specific code style formatter.

The formatter for Eclipse CDT is based on an anonymous contribution.





TODO

    autoreconf --install
    ./configure
    make
