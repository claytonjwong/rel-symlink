# rel-symlink
## rslink -h
```/Users/clayton.wong/workspace/rslink/cmake-build-debug/rslink -h
   
             _                           _ _       _
    _ __ ___| |      ___ _   _ _ __ ___ | (_)_ __ | | __
   | '__/ _ \ |_____/ __| | | | '_ ` _ \| | | '_ \| |/ /
   | | |  __/ |_____\__ \ |_| | | | | | | | | | | |   <
   |_|  \___|_|     |___/\__, |_| |_| |_|_|_|_| |_|_|\_\
                         |___/
   
       
   Options:
     -h [ --help ]          Print help messages
     -d [ --dry-run ]       Print absolute symbolic links which are candidates for
                            modification to relative symbolic links without 
                            actually performing updates from absolute to relative 
                            symbolic links
     -t [ --toolchain ] arg absolute directory of the toolchain which contains 
                            absolute symbolic links to be updated to relative 
                            symbolic links
     -b [ --base ] arg      base directory within the toolchain directory used as 
                            a relative reference directory to generate relative 
                            symbolic links against
   
   
   
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
   
   
      E X A M P L E    U S A G E
   
   
   
    1) Given the absolute toolchain directory:
   
   
    /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21
    [ --------------- toolchain directory ----------------- ][ ---------------------------- base directory ----------------------------- ]
   
   
   
    2) Execute the command:
   
   
    rslink --toolchain /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy --base /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21
   
   
   
    3) Symbolic links are updated from absolute to relative directory paths:
   
   
   /Users/clayton.wong/workspace/rslink/cmake-build-debug/rslink --toolchain /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy --base /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/aclocal
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/aclocal-1.11
       After  --> ../../usr/bin/aclocal-1.11
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-c++
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-g++
       After  --> ../../usr/bin/mips-unknown-linux-uclibc-g++
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-gcc
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-gcc-4.6.2
       After  --> ../../usr/bin/mips-unknown-linux-uclibc-gcc-4.6.2
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ld.bfd
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ld
       After  --> ../../usr/bin/mips-unknown-linux-uclibc-ld
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/automake
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/automake-1.11
       After  --> ../../usr/bin/automake-1.11
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/g++
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/c++
       After  --> ../../../usr/mips-unknown-linux-uclibc/bin/c++
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/objdump
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-objdump
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-objdump
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/strip
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-strip
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-strip
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/ld
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ld
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-ld
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/ld.bfd
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ld
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-ld
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/nm
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-nm
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-nm
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/ar
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ar
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-ar
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/as
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-as
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-as
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/objcopy
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-objcopy
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-objcopy
   
   Updating: /Users/clayton.wong/Documents/embedded/OEM_xxx_DEVICE_yyy/opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/mips-unknown-linux-uclibc/bin/ranlib
       Before --> /opt/toolchains/crosstools-mips-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21/usr/bin/mips-unknown-linux-uclibc-ranlib
       After  --> ../../../usr/bin/mips-unknown-linux-uclibc-ranlib
   
   Process finished with exit code 0
   
   
    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

```

## Note: broken absolute symbolic links can be found from the command line
```
find -L . -type l
```
