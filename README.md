# n-days

A collection of POCs/writeups for iOS vulnerabilities discovered by me or non public ones which I diffed.

|      CVE        |     Patched In |     Link      |   Reported by me | Misc Info|
|:---------------:|-------------------|:---------------:|:-----------:|:---:|
| [CVE-2021-1757](https://support.apple.com/en-us/HT212146) | iOS 14.4 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-1757/CVE-2021-1757-PoC.c) - [info](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-1757/CVE-2021-1757-Writeup.md) | :x:| diff | 
| Silently fixed | iOS 14.5 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AppleH10CamIn-OOBw/AppleH10CamIn-OOBw-PoC.c) - [info](https://github.com/b1n4r1b01/n-days/blob/main/AppleH10CamIn-OOBw/AppleH10CamIn-OOBw-Writeup.md) | :heavy_check_mark: | dropped as 0day |
| [CVE-2021-30674](https://support.apple.com/en-us/HT212528)  | iOS 14.6 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-30674/CVE-2021-30674.c) | :heavy_check_mark: | - |
| [CVE-2021-30807](https://support.apple.com/en-us/HT212623) | iOS 14.7.1 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/CVE-2021-30807/CVE-2021-30807.c) - [more](http://web.archive.org/web/20211031080037/https://twitter.com/b1n4r1b01/status/1419734027565617165) | :x: | ITW diff|
| [File System](https://support.apple.com/en-us/HT212814) | iOS 15.0 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/lifs_poc.c) | :heavy_check_mark: | - |
| [CVE-2021-30983](https://support.apple.com/en-us/HT212976)| iOS 15.2 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/IOMFB_15.1.c) | :x: | TFC 2021 LPE diff|
|[CVE-2022-22587](https://support.apple.com/en-us/HT213053)| iOS 15.3 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/IOMFB_oobr_15.2.c) | :heavy_check_mark: | dropped as 0day|
| CVE-2022-22672 | iOS 15.4 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AFU.c) | :heavy_check_mark: | Advisory listing pending :( |
| [CVE-2022-22675](https://support.apple.com/en-us/HT213219) | iOS 15.4.1 | [poc](https://github.com/b1n4r1b01/n-days/blob/main/AVD-15.4.1.mp4) | :x: | ITW diff with [@littlelailo](https://twitter.com/littlelailo)|