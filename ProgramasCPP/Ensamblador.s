PAGE 60,132
TITLE Area de un trapecio
INCLUDE 'EMU8086.INC'
CR EQU 13
LF EQU 10

;---------------------------------------------
.MODEL SMALL
.STACK 200 ;Se define la pila
.DATA ;Se definen datos      
       mensaje1 DB cr,lf,'Programa que calcula el area de un trapecio.$'
       mensaje2 DB cr,lf,'Ingresa la base menor: (presiona enter)$'
       mensaje3 DB cr,lf,'Ingresa la base mayor: (presiona enter)$'
       mensaje4 DB cr,lf,'Presiona cualquier tecla para continuar$'
       mensaje5 DB cr,lf,'Presiona 1 para calcular el area del trapecio o  presiona 0 para salir.$'
       mensaje6 DB cr,lf,'Ingresa la altura: (presiona enter)$'
       mensaje10 DB cr,lf,'El area del trapecio es:$'
       salir DB cr,lf,'Saliendo del programa presione cualquier tecla..$'

       f1 DW ?
       f2 DW ?
       f3 DW ?
       f4 DW ?

       resultado DB cr,lf,'el area del triangulo es : $'
       espa DB ' ',cr,lf,'$'

       c  equ 02  

;----------------------------------------------------------------
.CODE Area
    DEFINE_SCAN_NUM
    DEFINE_PRINT_NUM_UNS
    jmp inicio

inicio:
        MOV ax,Data
        MOV DS,AX

        MOV AH,00H
        MOV AL,03H
        INT 10H

        MOV AH,09H
        LEA DX,mensaje1
        INT 21H

        LEA DX,espa
        INT 21H

        MOV AH,09H
        LEA DX,mensaje5
        INT 21H

        LEA DX,espa
        INT 21H

        MOV AH,01H
        INT 21H

        SUB AL,30H
        CMP AL,00H
        JE fin
        CMP AL,01H
        JE multiplica

multiplica:

        MOV AH,00H
        MOV AL,03H
        INT 10H

        MOV AH,09H
        LEA DX,mensaje10
        INT 21H  

        LEA DX,espa
        INT 21H

        LEA DX,mensaje2
        INT 21H

        CALL SCAN_NUM

        MOV f1,CX 

        MOV AH,09H
        LEA DX,mensaje3
        INT 21H 

        CALL SCAN_NUM

        MOV f2,CX

        MOV AH,09H
        LEA DX,mensaje6
        INT 21H 

        CALL SCAN_NUM

        MOV f3,CX

        MOV AH,09H
        LEA DX,resultado
        INT 21H

        MOV AX,F1
        MOV BX,f2
        ADD BX,F1
        MOV BX,C
        DIV BX ;MARCA ERROR AL QUERER DIVIDIR LA SUMA ENTRE LA CONSTANTE C QUE ES IGUAL A 2
        MOV BX,f3
        MUL BX

        CALL PRINT_NUM_UNS

        MOV AH,09H
        LEA DX,espa
        INT 21H

        LEA DX,mensaje4
        INT 21H

        MOV AH,01h
        INT 21H
        JMP inicio

fin:

        MOV AH,09H
        LEA DX,salir
        INT 21H 

        MOV AH,01h
        INT 21H

        MOV AH,01H
        mov al,03H
        INT 10H 

        mov ax,4C00h
        int 21h

.EXIT
END