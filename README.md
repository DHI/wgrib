# wgrib
WGRIB is a program to manipulate, inventory and decode [GRIB](https://en.wikipedia.org/wiki/GRIB) (edition 1) files.

**This is not the official version**

Forked from the official version available at [NCEP](https://www.cpc.ncep.noaa.gov/products/wesley/wgrib.html)


## Usage

### Short inventory
```
> wgrib.exe waves.grb
1:0:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 30:NAve=0
2:396:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 34:NAve=0
3:792:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 47:NAve=0
4:1188:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 11:NAve=0
5:1584:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 9:NAve=0
6:1980:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 49:NAve=0
7:2376:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 31:NAve=0
8:2772:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 41:NAve=0
9:3168:d=21011800:SWH:kpds5=229:kpds6=102:kpds7=0:TR=10:P1=0:P2=168:TimeU=1:MSL:168hr fcst:type=Perturbed forecast 50:NAve=0
```


## Changes compared to the official version (2021-01-22)
* Perturbed forecast numbering for additional ECMWF streams
