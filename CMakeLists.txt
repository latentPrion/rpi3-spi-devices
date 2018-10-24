cmake_minimum_required(VERSION 3.8.2)

project(Rpi3SpiDevices C)

CAmkESAddImportPath(interfaces)
CAmkESAddImportPath(templates)
CAmkESAddImportPath(components)

add_subdirectory(components/eth-nic-enc28j60)
