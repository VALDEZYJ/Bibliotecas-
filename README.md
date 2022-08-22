## BIBLIOTECA ESTATICA Y DINAMICA 
En este espacio de github se encuentran alojadas las bibliotecaS estáticay dinámica. Las bliotecas creadas sirven para hacer conversiones métricas y son las siguientes:
1.	centímetros a kilómetros.
2.	kilómetros a centímetros.
3.	centímetros a milímetros.
4.	milímetros a centímetros.
5.	metros a centímetros.
6.	centímetros a metros.
7.	decámetros a metros.
8.	metros a decámetros.
9.	metros a hectómetros.
10.	hectómetros a metros.
11.	micrómetro a metro.
12.	metros a micrómetros.

># incluir  " cabecera\conver "
if (op == 1) 
res=cmAkm(r);
{
devuelve kilómetros;
{

if (op == 2)
res=kmAcm(r);
{
devuelve centímetros;
}
if (op == 3)
res=cmAmm(r);
{
Devuelve milímetros; 
}
if (op == 4)
res=mmAcm(r);
{
devulve centímetros;
}
if (op == 5)
res=mAcm(r);
{
Devulve centímetros;
}
if (op == 6)
res=cmAm(r);
{
devulve metros;
}
if (op == 7)
 res=decamet(r);
{
devulve metros;
}
if (op == 8)
res=metdeca(r);
{
devuelve decámetros; 
}
if (op == 9)
res=methecto(r);
{
devulve hectómetros; 
}

if (op == 10)
 res=hectomet(r);
{
devuelve metros;
}
if (op == 11)
 res=micmet(r);
{
devulve metros;
}
if (op == 12)
res=metmic(r);
{
devulve micrómetros;
}

Instrucciones para compilar la biblioteca estática y dinámica:
Clonar el repositorio :
>https://github.com/VALDEZYJ/Bibliotecas-.git

"#include cabecera\conver fesdfdsfsesf" RUTA RELATIVA DE LA CABECERA

BIBLIOTECA DINAMICA

Compilación de librería: 
> ar crs .\lib\estatica\conver.lib .\bibo\*.o

Crear ejecutable:

>g++ conversiones.cc -o conversiones -I .\lib\cabeceras -L .\lib\estatica -lconver

Compilar ejecutable:

>.\conversiones.exe

BIBLIOTECA DINAMICA

Generar el DLL:
>gcc -shared .\comp_o\bibodin\*.o -o conver.dll 

Compilar estática en .cc:
>g++ -o conversionesdin.exe conversionesdin.cc -L./lib/dinámica -lconver 

Crear .exe de dinámica:
>g++ conversionesdin.cc .\lib\dinamica\conver.dll -o conversionesdin

Compilar ejecutable:
>.\conversionesdin.exe

