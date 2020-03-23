# Target: STM32F4Discovery

https://www.st.com/en/evaluation-tools/stm32f4discovery.html

## Features

| item | discription |
| ---- | ----------- |
| microcontroller | STM32F407VGT6 |
| processor | 32bit ARM Cortex-M4 with FPU-core |
| Frash memory | 1MB |
| RAM | 192kB |
| package | LQFP100 |

# Creating Environments

## GNU Arm Embedded Toolchain

Install [pre-built GNU toolchain for ARM Cortex-M/R processors](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm "GNU Arm Embedded Toolchain")

```
yay -S arm-none-eabi-gcc arm-none-eabi-gdb arm-none-eabi-binutils arm-none-eabi-newlib
```

| name | discription |
| ---- | ----------- |
| gcc | [GNU compiler collection](https://gcc.gnu.org/ "GNU Compiler Collection") |
| gdb | [GNU Project debugger](https://www.gnu.org/software/gdb/ "GNU Project Debugger") |
| binutils | [collection of binary tools](https://www.gnu.org/software/binutils/ "GNU Binutils") |
| newlib | [C library intended for use on embedded systems](https://www.sourceware.org/newlib/ "Newlib") |

These toolchains support ARM...

- Cortex-M0
- Cortex-M0+
- Cortex-M3
- Cortex-M4
- Cortex-M7
- Cortex-M23
- Cortex-M33
- Cortex-R4
- Cortex-R5
- Cortex-R7
- Cortex-R8
- Cortex-R52