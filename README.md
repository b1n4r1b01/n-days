# n-days

A collection of POCs & writeups for iOS vulnerabilities either discovered by me, binary diffed from In-The-Wild updates or just cool non-public bugs.

|	CVE					|	Patched In			|		Link	 |		Reported by me	|	Exploited ITW	|	Description		|
|:---------------------:|-----------------------|:--------------:|:--------------------:|:-----------------:|:-----------------:|
| [CVE-2021-1757](https://support.apple.com/en-us/HT212146) | iOS 14.4 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-1757/CVE-2021-1757-PoC.c) - [info](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-1757/CVE-2021-1757-Writeup.md) | :heavy_multiplication_x:| :heavy_multiplication_x: | Kernel PC control |
| [CVE-2021-1812](https://support.apple.com/en-us/HT212317) | iOS 14.5 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-1812.c) | :white_check_mark: | :heavy_multiplication_x: | Kernel oob r/w? |
| - | iOS 14.5 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AppleH10CamIn-OOBw/AppleH10CamIn-OOBw-PoC.c) - [info](https://github.com/b1n4r1b01/n-days/blob/main/AppleH10CamIn-OOBw/AppleH10CamIn-OOBw-Writeup.md) | :white_check_mark: | :heavy_multiplication_x: | Kernel oob write |
| [CVE-2021-30674](https://support.apple.com/en-us/HT212528)  | iOS 14.6 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-30674/CVE-2021-30674.c) | :white_check_mark: | :heavy_multiplication_x: | Kernel oob read |
| [CVE-2021-30807](https://support.apple.com/en-us/HT212623) | iOS 14.7.1 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-30807/CVE-2021-30807.c) - [more](http://web.archive.org/web/20211031080037/https://twitter.com/b1n4r1b01/status/1419734027565617165) | :heavy_multiplication_x: | :white_check_mark: | Kernel oob write |
|[CVE-2021-30837](https://support.apple.com/en-us/HT212814)| iOS 15.0 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-30837.c) | :white_check_mark: |:heavy_multiplication_x: | Kernel oob write |
| [File System](https://support.apple.com/en-us/HT212814) | iOS 15.0 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/lifs_poc.c) | :white_check_mark: | :heavy_multiplication_x:| Kernel oob r/w? |
| [CVE-2021-30983](https://support.apple.com/en-us/HT212976)| iOS 15.2 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/IOMFB_15.1.c) | :heavy_multiplication_x: | :white_check_mark: | Kernel oob write |
| [CVE-2022-22587](https://support.apple.com/en-us/HT213053)| iOS 15.3 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/IOMFB_oobr_15.2.c) | :white_check_mark: | :white_check_mark: | Kernel oob write |
| [CVE-2022-22672](https://support.apple.com/en-us/HT213182) | iOS 15.4 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AFU.c) | :white_check_mark: |:heavy_multiplication_x: | Kernel oob write |
| [CVE-2022-22675](https://support.apple.com/en-us/HT213219) | iOS 15.4.1 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AVD-15.4.1.mp4) - [more](https://x.com/littlelailo/status/1521173087592628226) | :heavy_multiplication_x: | :white_check_mark: | Kernel oob write |
| [CVE-2025-24085](https://support.apple.com/en-us/122066) | iOS 18.3 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2025-24085/CVE-2025-24085.c) - [info](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2025-24085/CVE-2025-24085.md) | :heavy_multiplication_x: |:white_check_mark: | Userland UAF |
| [CVE-2025-43300](https://support.apple.com/en-us/124925) | iOS 18.6.2 | [info](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2025-43300.md) | :heavy_multiplication_x: | :white_check_mark: | Userland oob write|



- CVE-2022-22675's POC was a joint effort with [@littlelailo](https://x.com/littlelailo/) 
- CVE-2021-30983 is not marked as ITW by Apple but Google caught an [ITW sample](https://googleprojectzero.blogspot.com/2022/06/curious-case-carrier-app.html)
