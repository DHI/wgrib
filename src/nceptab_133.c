#include "cnames.h"

const struct ParmTable parm_table_nceptab_133[256] = {
      /* 0 */ {"var0", "undefined"},
      /* 1 */ {"PRES", "Pressure [Pa]"},
      /* 2 */ {"PRMSL", "Pressure reduced to MSL [Pa]"},
      /* 3 */ {"PTEND", "Pressure tendency [Pa/s]"},
      /* 4 */ {"PVORT", "Pot. vorticity [km^2/kg/s]"},
      /* 5 */ {"ICAHT", "ICAO Standard Atmosphere Reference Height [M]"},
      /* 6 */ {"GP", "Geopotential [m^2/s^2]"},
      /* 7 */ {"HGT", "Geopotential height [gpm]"},
      /* 8 */ {"DIST", "Geometric height [m]"},
      /* 9 */ {"HSTDV", "Std dev of height [m]"},
      /* 10 */ {"TOZNE", "Total ozone [Dobson]"},
      /* 11 */ {"TMP", "Temp. [K]"},
      /* 12 */ {"VTMP", "Virtual temp. [K]"},
      /* 13 */ {"POT", "Potential temp. [K]"},
      /* 14 */ {"EPOT", "Pseudo-adiabatic pot. temp. [K]"},
      /* 15 */ {"TMAX", "Max. temp. [K]"},
      /* 16 */ {"TMIN", "Min. temp. [K]"},
      /* 17 */ {"DPT", "Dew point temp. [K]"},
      /* 18 */ {"DEPR", "Dew point depression [K]"},
      /* 19 */ {"LAPR", "Lapse rate [K/m]"},
      /* 20 */ {"VIS", "Visibility [m]"},
      /* 21 */ {"RDSP1", "Radar spectra (1) [non-dim]"},
      /* 22 */ {"RDSP2", "Radar spectra (2) [non-dim]"},
      /* 23 */ {"RDSP3", "Radar spectra (3) [non-dim]"},
      /* 24 */ {"PLI", "Parcel lifted index (to 500 hPa) [K]"},
      /* 25 */ {"TMPA", "Temp. anomaly [K]"},
      /* 26 */ {"PRESA", "Pressure anomaly [Pa]"},
      /* 27 */ {"GPA", "Geopotential height anomaly [gpm]"},
      /* 28 */ {"WVSP1", "Wave spectra (1) [non-dim]"},
      /* 29 */ {"WVSP2", "Wave spectra (2) [non-dim]"},
      /* 30 */ {"WVSP3", "Wave spectra (3) [non-dim]"},
      /* 31 */ {"WDIR", "Wind direction [deg]"},
      /* 32 */ {"WIND", "Wind speed [m/s]"},
      /* 33 */ {"UGRD", "u wind [m/s]"},
      /* 34 */ {"VGRD", "v wind [m/s]"},
      /* 35 */ {"STRM", "Stream function [m^2/s]"},
      /* 36 */ {"VPOT", "Velocity potential [m^2/s]"},
      /* 37 */ {"MNTSF", "Montgomery stream function [m^2/s^2]"},
      /* 38 */ {"SGCVV", "Sigma coord. vertical velocity [/s]"},
      /* 39 */ {"VVEL", "Pressure vertical velocity [Pa/s]"},
      /* 40 */ {"DZDT", "Geometric vertical velocity [m/s]"},
      /* 41 */ {"ABSV", "Absolute vorticity [/s]"},
      /* 42 */ {"ABSD", "Absolute divergence [/s]"},
      /* 43 */ {"RELV", "Relative vorticity [/s]"},
      /* 44 */ {"RELD", "Relative divergence [/s]"},
      /* 45 */ {"VUCSH", "Vertical u shear [/s]"},
      /* 46 */ {"VVCSH", "Vertical v shear [/s]"},
      /* 47 */ {"DIRC", "Direction of current [deg]"},
      /* 48 */ {"SPC", "Speed of current [m/s]"},
      /* 49 */ {"UOGRD", "u of current [m/s]"},
      /* 50 */ {"VOGRD", "v of current [m/s]"},
      /* 51 */ {"SPFH", "Specific humidity [kg/kg]"},
      /* 52 */ {"RH", "Relative humidity [%]"},
      /* 53 */ {"MIXR", "Humidity mixing ratio [kg/kg]"},
      /* 54 */ {"PWAT", "Precipitable water [kg/m^2]"},
      /* 55 */ {"VAPP", "Vapor pressure [Pa]"},
      /* 56 */ {"SATD", "Saturation deficit [Pa]"},
      /* 57 */ {"EVP", "Evaporation [kg/m^2]"},
      /* 58 */ {"CICE", "Cloud Ice [kg/m^2]"},
      /* 59 */ {"PRATE", "Precipitation rate [kg/m^2/s]"},
      /* 60 */ {"TSTM", "Thunderstorm probability [%]"},
      /* 61 */ {"APCP", "Total precipitation [kg/m^2]"},
      /* 62 */ {"NCPCP", "Large scale precipitation [kg/m^2]"},
      /* 63 */ {"ACPCP", "Convective precipitation [kg/m^2]"},
      /* 64 */ {"SRWEQ", "Snowfall rate water equiv. [kg/m^2/s]"},
      /* 65 */ {"WEASD", "Accum. snow [kg/m^2]"},
      /* 66 */ {"SNOD", "Snow depth [m]"},
      /* 67 */ {"MIXHT", "Mixed layer depth [m]"},
      /* 68 */ {"TTHDP", "Transient thermocline depth [m]"},
      /* 69 */ {"MTHD", "Main thermocline depth [m]"},
      /* 70 */ {"MTHA", "Main thermocline anomaly [m]"},
      /* 71 */ {"TCDC", "Total cloud cover [%]"},
      /* 72 */ {"CDCON", "Convective cloud cover [%]"},
      /* 73 */ {"LCDC", "Low level cloud cover [%]"},
      /* 74 */ {"MCDC", "Mid level cloud cover [%]"},
      /* 75 */ {"HCDC", "High level cloud cover [%]"},
      /* 76 */ {"CWAT", "Cloud water [kg/m^2]"},
      /* 77 */ {"BLI", "Best lifted index (to 500 hPa) [K]"},
      /* 78 */ {"SNOC", "Convective snow [kg/m^2]"},
      /* 79 */ {"SNOL", "Large scale snow [kg/m^2]"},
      /* 80 */ {"WTMP", "Water temp. [K]"},
      /* 81 */ {"LAND", "Land-sea coverage (land=1;sea=0) [fraction]"},
      /* 82 */ {"DSLM", "Deviation of sea level from mean [m]"},
      /* 83 */ {"SFCR", "Surface roughness [m]"},
      /* 84 */ {"ALBDO", "Albedo [%]"},
      /* 85 */ {"TSOIL", "Soil temp. [K]"},
      /* 86 */ {"SOILM", "Soil moisture content [kg/m^2]"},
      /* 87 */ {"VEG", "Vegetation [%]"},
      /* 88 */ {"SALTY", "Salinity [kg/kg]"},
      /* 89 */ {"DEN", "Density [kg/m^3]"},
      /* 90 */ {"WATR", "Water runoff [kg/m^2]"},
      /* 91 */ {"ICEC", "Ice concentration (ice=1;no ice=0) [fraction]"},
      /* 92 */ {"ICETK", "Ice thickness [m]"},
      /* 93 */ {"DICED", "Direction of ice drift [deg]"},
      /* 94 */ {"SICED", "Speed of ice drift [m/s]"},
      /* 95 */ {"UICE", "u of ice drift [m/s]"},
      /* 96 */ {"VICE", "v of ice drift [m/s]"},
      /* 97 */ {"ICEG", "Ice growth rate [m/s]"},
      /* 98 */ {"ICED", "Ice divergence [/s]"},
      /* 99 */ {"SNOM", "Snow melt [kg/m^2]"},
      /* 100 */ {"HTSGW", "Sig height of wind waves and swell [m]"},
      /* 101 */ {"WVDIR", "Direction of wind waves [deg]"},
      /* 102 */ {"WVHGT", "Sig height of wind waves [m]"},
      /* 103 */ {"WVPER", "Mean period of wind waves [s]"},
      /* 104 */ {"SWDIR", "Direction of swell waves [deg]"},
      /* 105 */ {"SWELL", "Sig height of swell waves [m]"},
      /* 106 */ {"SWPER", "Mean period of swell waves [s]"},
      /* 107 */ {"DIRPW", "Primary wave direction [deg]"},
      /* 108 */ {"PERPW", "Primary wave mean period [s]"},
      /* 109 */ {"DIRSW", "Secondary wave direction [deg]"},
      /* 110 */ {"PERSW", "Secondary wave mean period [s]"},
      /* 111 */ {"NSWRS", "Net short wave (surface) [W/m^2]"},
      /* 112 */ {"NLWRS", "Net long wave (surface) [W/m^2]"},
      /* 113 */ {"NSWRT", "Net short wave (top) [W/m^2]"},
      /* 114 */ {"NLWRT", "Net long wave (top) [W/m^2]"},
      /* 115 */ {"LWAVR", "Long wave [W/m^2]"},
      /* 116 */ {"SWAVR", "Short wave [W/m^2]"},
      /* 117 */ {"GRAD", "Global radiation [W/m^2]"},
      /* 118 */ {"BRTMP", "Brightness temperature [K]"},
      /* 119 */ {"LWRAD", "Radiance with respect to wave no. [W/m/sr]"},
      /* 120 */ {"SWRAD", "Radiance with respect ot wave len. [W/m^3/sr]"},
      /* 121 */ {"LHTFL", "Latent heat flux [W/m^2]"},
      /* 122 */ {"SHTFL", "Sensible heat flux [W/m^2]"},
      /* 123 */ {"BLYDP", "Boundary layer dissipation [W/m^2]"},
      /* 124 */ {"UFLX", "Zonal momentum flux [N/m^2]"},
      /* 125 */ {"VFLX", "Meridional momentum flux [N/m^2]"},
      /* 126 */ {"WMIXE", "Wind mixing energy [J]"},
      /* 127 */ {"IMGD", "Image data []"},
      /* 128 */ {"var128", "undefined"},
      /* 129 */ {"var129", "undefined"},
      /* 130 */ {"var130", "undefined"},
      /* 131 */ {"var131", "undefined"},
      /* 132 */ {"var132", "undefined"},
      /* 133 */ {"var133", "undefined"},
      /* 134 */ {"var134", "undefined"},
      /* 135 */ {"var135", "undefined"},
      /* 136 */ {"var136", "undefined"},
      /* 137 */ {"var137", "undefined"},
      /* 138 */ {"var138", "undefined"},
      /* 139 */ {"POZT", "Ozone production from T term"},
      /* 140 */ {"var140", "undefined"},
      /* 141 */ {"var141", "undefined"},
      /* 142 */ {"var142", "undefined"},
      /* 143 */ {"var143", "undefined"},
      /* 144 */ {"var144", "undefined"},
      /* 145 */ {"var145", "undefined"},
      /* 146 */ {"var146", "undefined"},
      /* 147 */ {"var147", "undefined"},
      /* 148 */ {"var148", "undefined"},
      /* 149 */ {"var149", "undefined"},
      /* 150 */ {"var150", "undefined"},
      /* 151 */ {"var151", "undefined"},
      /* 152 */ {"var152", "undefined"},
      /* 153 */ {"var153", "undefined"},
      /* 154 */ {"OMGALF", "omega divided by density"},
      /* 155 */ {"var155", "undefined"},
      /* 156 */ {"var156", "undefined"},
      /* 157 */ {"var157", "undefined"},
      /* 158 */ {"var158", "undefined"},
      /* 159 */ {"var159", "undefined"},
      /* 160 */ {"var160", "undefined"},
      /* 161 */ {"var161", "undefined"},
      /* 162 */ {"var162", "undefined"},
      /* 163 */ {"var163", "undefined"},
      /* 164 */ {"COVZZ", "Covariance between u and u"},
      /* 165 */ {"COVMM", "Covariance between v and v"},
      /* 166 */ {"COVQZ", "Covariance between q and u"},
      /* 167 */ {"COVQM", "Covariance between q and v"},
      /* 168 */ {"COVTVV", "Covariance between T and omega"},
      /* 169 */ {"COVQVV", "Covariance between q and omega"},
      /* 170 */ {"var170", "undefined"},
      /* 171 */ {"var171", "undefined"},
      /* 172 */ {"var172", "undefined"},
      /* 173 */ {"LRGMR", "Large scale moistening rate"},
      /* 174 */ {"VDFOZ", "Ozone vertical diffusion"},
      /* 175 */ {"POZ", "Ozone production"},
      /* 176 */ {"var176", "undefined"},
      /* 177 */ {"var177", "undefined"},
      /* 178 */ {"var178", "undefined"},
      /* 179 */ {"var179", "undefined"},
      /* 180 */ {"var180", "undefined"},
      /* 181 */ {"GWDU", "Gravity wave drag u acceleration"},
      /* 182 */ {"GWDV", "Gravity wave drag v acceleration"},
      /* 183 */ {"CNVU", "Convective u momentum mixing acceleration"},
      /* 184 */ {"CNVV", "Convective v momentum mixing acceleration"},
      /* 185 */ {"AKHS", "Sfc exchange coeff for T and Q divided by delta z"},
      /* 186 */ {"AKMS", "Sfc exchange coeff for U and V divided by delta z"},
      /* 187 */ {"var187", "undefined"},
      /* 188 */ {"TOZ", "Ozone tendency"},
      /* 189 */ {"var189", "undefined"},
      /* 190 */ {"var190", "undefined"},
      /* 191 */ {"SUNSD", "Sunshine duration [s]"},
      /* 192 */ {"MOSF", "Meridional overturning stream function [10^6m^3/s]"},
      /* 193 */ {"EPSR", "Radiative emiissivity"},
      /* 194 */ {"var194", "undefined"},
      /* 195 */ {"QZ0", "q at top of viscous sublayer"},
      /* 196 */ {"CNGWDU", "Convective gravity wave drag zonal acceleration"},
      /* 197 */ {"CNGWDV", "Convective gravity wave drag meridional acceleration"},
      /* 198 */ {"var198", "undefined"},
      /* 199 */ {"var199", "undefined"},
      /* 200 */ {"var200", "undefined"},
      /* 201 */ {"THZ0", "Theta at top of viscous sublayer"},
      /* 202 */ {"CNVUMF", "Convective updraft mass flux"},
      /* 203 */ {"COVPSPS", "Covariance between psfc and psfc"},
      /* 204 */ {"QMAX", "Maximum specific humidity at 2m"},
      /* 205 */ {"QMIN", "Minimum specific humidity at 2m"},
      /* 206 */ {"COVQQ", "Covariance between q and q"},
      /* 207 */ {"var207", "undefined"},
      /* 208 */ {"var208", "undefined"},
      /* 209 */ {"CNVDMF", "Convective downdraft mass flux"},
      /* 210 */ {"var210", "undefined"},
      /* 211 */ {"var211", "undefined"},
      /* 212 */ {"var212", "undefined"},
      /* 213 */ {"var213", "undefined"},
      /* 214 */ {"var214", "undefined"},
      /* 215 */ {"var215", "undefined"},
      /* 216 */ {"var216", "undefined"},
      /* 217 */ {"var217", "undefined"},
      /* 218 */ {"var218", "undefined"},
      /* 219 */ {"CNVDEMF", "Convective detrainment mass flux"},
      /* 220 */ {"COVVVVV", "Covariance between omega and omega"},
      /* 221 */ {"var221", "undefined"},
      /* 222 */ {"var222", "undefined"},
      /* 223 */ {"var223", "undefined"},
      /* 224 */ {"var224", "undefined"},
      /* 225 */ {"var225", "undefined"},
      /* 226 */ {"var226", "undefined"},
      /* 227 */ {"var227", "undefined"},
      /* 228 */ {"var228", "undefined"},
      /* 229 */ {"var229", "undefined"},
      /* 230 */ {"var230", "undefined"},
      /* 231 */ {"var231", "undefined"},
      /* 232 */ {"var232", "undefined"},
      /* 233 */ {"var233", "undefined"},
      /* 234 */ {"COVTT", "Covariance between T and T"},
      /* 235 */ {"var235", "undefined"},
      /* 236 */ {"WTEND", "Tendency of vertical velocity"},
      /* 237 */ {"var237", "undefined"},
      /* 238 */ {"var238", "undefined"},
      /* 239 */ {"POZO", "Ozone production from col ozone term"},
      /* 240 */ {"var240", "undefined"},
      /* 241 */ {"var241", "undefined"},
      /* 242 */ {"var242", "undefined"},
      /* 243 */ {"var243", "undefined"},
      /* 244 */ {"var244", "undefined"},
      /* 245 */ {"var245", "undefined"},
      /* 246 */ {"var246", "undefined"},
      /* 247 */ {"var247", "undefined"},
      /* 248 */ {"var248", "undefined"},
      /* 249 */ {"var249", "undefined"},
      /* 250 */ {"var250", "undefined"},
      /* 251 */ {"var251", "undefined"},
      /* 252 */ {"var252", "undefined"},
      /* 253 */ {"var253", "undefined"},
      /* 254 */ {"var254", "undefined"},
      /* 255 */ {"var255", "undefined"},
};
