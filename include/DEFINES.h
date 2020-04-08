//
// Created by Michal_Marszalek on 03.04.2020.
//

#ifndef BMP_DEFINES_H
#define BMP_DEFINES_H

#define READ_FILE(ARG) READ_FILE_SIZE(ARG, sizeof(device.ARG))
#define READ_FILE_SIZE(ARG, SIZE) fread(&header.ARG, SIZE, 1, f)

#endif //BMP_DEFINES_H
