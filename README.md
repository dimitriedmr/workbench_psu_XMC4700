# workbench_psu_XMC4700
It does voltage and current measurements.

# Install

XMC4700 setup moved from DAVE to emStudio (embedded segger studio legacy  v732a)

from package manager, install infineon relaxkit package

$(PackagesDir)=/home/<usr_name>/.segger/SEGGER Embedded Studio/v3/packages

$(PackagesDir)/XMC4700_XMC4700_RelaxKit

SEGGER_RTL and stdlib from IDE

CMSIS from: https://github.com/ARM-software/CMSIS_6/blob/main/CMSIS/Core/Include/

XMClib from: https://github.com/Infineon/mtb-xmclib-cat3/releases/tag/release-v4.7.0

Segger JLink location: $(JLinkDir)=/opt/SEGGER/JLink

./JLinkGDBServerExe

IDE executable location, default: /usr/share/segger_embedded_studio_for_arm_7.32a/bin and custom: ~/SeggerEmStudio/bin

./emStudio

project location: $(ProjectDir)=/home/<usr_name>/Documents/SEGGER Embedded Studio for ARM Projects/

project is based on: OS_StartLEDBlink.c from Applications Examples

multiple changes in emProject file and linker script is changed to ld file

