.MODEL SMALL
.STACK 100H

.DATA
HEADER DB "BO CAU HOI CO BAN"
       DB 10, 13, ""
       DB 10, 13, "$"

NOTICE DB 10, 13, "CHU Y : TAT UNIKEY TRUOC KHI SU DUNG $"
       DB 10, 13, ""
       DB 10, 13, "$"

COMNAM DB 10, 13, ""
       DB 10, 13, "NHAP THONG TIN : $"
SUR DB 10, 13, "HO : $"
INPUTSUR DB 21
INPUTS DB 21 DUP("$")

FIR DB " TEN : $"
INPUTFIR DB 21
INPUTF DB 21 DUP("$")

MI DB " ID: $"
INPUTMI DB 21
INPUTM DB 21 DUP("$")

CORRECT DB 10, 13, "DAP AN DUNG! $"

PAR1 DB 10, 13, ""
     DB 10, 13, "PHAN I $"
DIRECM DB 10, 13, "CHON DAP AN DUNG. $"
MESSAGE1 DB 10, 13, ""
         DB 10, 13, ""
         DB "NHAN PHIM ENTER DE BAT DAU QUIZ: $"
         DB 10, 13, ""
         DB 10, 13, "$"

QUIZ1 DB 10, 13, ""
      DB 10, 13, "1. 2 + 5 = ?"
      DB 10, 13, "A. 3      B. 8        C. 7"
      DB 10, 13, "DAP AN: $"
WR1 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN DUNG LA C$"

QUIZ2 DB 10, 13, ""
      DB 10, 13, "2. 7 - 4 = ?"
      DB 10, 13, "A. 2      B. 3        C. 1"
      DB 10, 13, "DAP AN: $"
WR2 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN DUNG LA B$"
    
QUIZ3 DB 10, 13, ""
      DB 10, 13, "3. 3 * 4 = ?"
      DB 10, 13, "A. 12     B. 13       C. 11"
      DB 10, 13, "DAP AN: $"
WR3 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN DUNG LA A$"

QUIZ4 DB 10, 13, ""
      DB 10, 13, "4. 36 / 4 = ?"
      DB 10, 13, "A. 9      B. 8        C. 7"
      DB 10, 13, "DAP AN: $"
WR4 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN DUNG LA A$"  
    
QUIZ5 DB 10, 13, ""
      DB 10, 13, "5. (3 + 2) * 4 / 10 = ?"
      DB 10, 13, "A. 6      B. 1        C. 2"
      DB 10, 13, "DAP AN: $"
WR5 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN DUNG LA C$"      
    
PAR2 DB 10, 13, ""
     DB 10, 13, "PHAN II $" 
DIRECTF DB 10, 13, "TRA LOI DUNG/SAI (D/S). $"
QUIZ6  DB 10, 13, ""
       DB 10, 13, "6. SO 2 LA MOT SO NGUYEN TO."
       DB 10, 13, "DAP AN: $"
WR6 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN LA DUNG$"
    
QUIZ7  DB 10, 13, ""
       DB 10, 13, "7. SO 7 CHIA HET CHO SO 5."
       DB 10, 13, "DAP AN: $"
WR7 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN LA SAI$"
    
QUIZ8  DB 10, 13, ""
       DB 10, 13, "8. SO CHIA HET CHO 5 CO TAN CUNG LA 0 VA 4."
       DB 10, 13, "DAP AN: $"
WR8 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN LA SAI$"
    
QUIZ9  DB 10, 13, ""
       DB 10, 13, "9. SO 9 LA MOT SO CHINH PHUONG."
       DB 10, 13, "DAP AN: $"
WR9 DB 10, 13, "DAP AN SAI!!!"
    DB 10, 13, "DAP AN LA DUNG$"

QUIZ10 DB 10, 13, ""
       DB 10, 13, "10. 6 / 3 = 2."
       DB 10, 13, "DAP AN: $"
WR10 DB 10, 13, "DAP AN SAI!!!"
     DB 10, 13, "DAP AN LA DUNG$"
        
PQUIZ DB 10, 13, "BAN DA HOAN THANH XONG BAI QUIZ"
      DB 10, 13, ""
PQUIZ_END DB 0
CONG DB 10, 13, "CHUC MUNG "
CONG_END DB 0
MESSAGE2 DB 13, 10, ""
         DB 13, 10, "SO CAU TRA LOI DUNG CUA BAN LA: $"
MESSAGE3 DB 13, 10, ""
         DB 13, 10, "NHAN PHIM 1 DE LAM LAI HOAC 0 DE THOAT: $"
MESSAGE4 DB 13, 10, ""
         DB 13, 10, "                    ***CAM ON.!***"
         DB 13, 10, ""
         DB 13, 10, "                    *** NHOM 3 ***"
         DB 13, 10, ""
         DB 13, 10, "LEADER :       NGUYEN TU KIEN"
         DB 13, 10, ""
         DB 13, 10, "FRONT-END :    TRAN THI ANH DUONG"
         DB 13, 10, ""
         DB 13, 10, "BACK-END :     VUONG QUOC HUNG"
         DB 13, 10, ""
         DB 13, 10, "              BUI HUY HOANG$"

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    
    LEA DX, HEADER
    MOV AH, 9
    INT 21H

    LEA DX, NOTICE
    MOV AH, 9
    INT 21H
    
    LEA DX, COMNAM
    MOV AH, 9
    INT 21H
    
    LEA DX, SUR
    MOV AH, 9
    INT 21H
    LEA DX, INPUTSUR
    MOV AH, 0AH
    INT 21H
    
    LEA DX, FIR
    MOV AH, 9
    INT 21H
    LEA DX, INPUTFIR
    MOV AH, 0AH
    INT 21H
    
    LEA DX, MI
    MOV AH, 9
    INT 21H
    LEA DX, INPUTMI
    MOV AH, 0AH
    INT 21H

START:
    MOV BL, 0

    LEA DX, MESSAGE1
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    
    CMP AL, 0DH
    JE PART1
    JNE START

PART1:
    LEA DX, PAR1
    MOV AH, 9
    INT 21H 
    LEA DX, DIRECM
    MOV AH, 9
    INT 21H

    
QUESTION1:
    LEA DX, QUIZ1
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 43H
    JE QC1
    CMP AL, 63H
    JE QC1
    JMP QW1
    
QC1:
    LEA DX, CORRECT
    INC BL
    MOV AH, 9
    INT 21H
    CALL QUESTION2

QW1:
    LEA DX, WR1
    MOV AH, 9
    INT 21H

QUESTION2:
    LEA DX, QUIZ2  
    MOV AH, 9
    INT 21H
    
    MOV AH, 1  
    INT 21H
    CMP AL, 42H  
    JE QC2
    CMP AL, 62H  
    JE QC2
    JMP QW2  

QC2:
    INC BL  
    LEA DX, CORRECT  
    MOV AH, 9
    INT 21H
    CALL QUESTION3  

QW2:
    LEA DX, WR2  
    MOV AH, 9
    INT 21H

    
QUESTION3:
    LEA DX, QUIZ3  
    MOV AH, 9
    INT 21H
    
    MOV AH, 1  
    INT 21H
    CMP AL, 41H  
    JE QC3
    CMP AL, 61H  
    JE QC3
    JMP QW3

QC3:
    INC BL   
    LEA DX, CORRECT  
    MOV AH, 9
    INT 21H
    CALL QUESTION4  

QW3:
    LEA DX, WR3  
    MOV AH, 9
    INT 21H
    
QUESTION4:
    LEA DX, QUIZ4  
    MOV AH, 9
    INT 21H
    
    MOV AH, 1  
    INT 21H
    CMP AL, 41H  
    JE QC4
    CMP AL, 61H  
    JE QC4    
    JMP QW4

QC4:
    INC BL  
    LEA DX, CORRECT  
    MOV AH, 9
    INT 21H
    CALL QUESTION5 

QW4:
    LEA DX, WR4  
    MOV AH, 9
    INT 21H    
    
QUESTION5:
    LEA DX, QUIZ5  
    MOV AH, 9
    INT 21H
    
    MOV AH, 1 
    INT 21H
    CMP AL, 43H  
    JE QC5
    CMP AL, 63H  
    JE QC5
    JMP QW5

QC5:
    INC BL 
    LEA DX, CORRECT 
    MOV AH, 9
    INT 21H
    CALL PART2  

QW5:
    LEA DX, WR5  
    MOV AH, 9
    INT 21H  
    
PART2:
    LEA DX, PAR2 
    MOV AH, 9
    INT 21H
    LEA DX, DIRECTF 
    MOV AH, 9
    INT 21H

QUESTION6:
    LEA DX, QUIZ6
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 44H
    JE QC6
    CMP AL, 64H
    JE QC6
    JMP QW6

QC6:
    INC BL
    LEA DX, CORRECT
    MOV AH, 9
    INT 21H
    CALL QUESTION7

QW6:
    LEA DX, WR6
    MOV AH, 9
    INT 21H
    
QUESTION7:
    LEA DX, QUIZ7
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 53H
    JE QC7
    CMP AL, 73H
    JE QC7
    JMP QW7

QC7:
    INC BL
    LEA DX, CORRECT
    MOV AH, 9
    INT 21H
    CALL QUESTION8

QW7:
    LEA DX, WR7
    MOV AH, 9
    INT 21H
    
QUESTION8:
    LEA DX, QUIZ8
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 53H
    JE QC8
    CMP AL, 73H
    JE QC8
    JMP QW8

QC8:
    INC BL
    LEA DX, CORRECT
    MOV AH, 9
    INT 21H
    CALL QUESTION9

QW8:
    LEA DX, WR8
    MOV AH, 9
    INT 21H

QUESTION9:
    LEA DX, QUIZ9
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 44H
    JE QC9
    CMP AL, 64H
    JE QC9
    JMP QW9

QC9:
    INC BL
    LEA DX, CORRECT
    MOV AH, 9
    INT 21H
    CALL QUESTION10

QW9:
    LEA DX, WR9
    MOV AH, 9
    INT 21H
        
QUESTION10:
    LEA DX, QUIZ10
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    CMP AL, 44H
    JE QC10
    CMP AL, 64H
    JE QC10
    JMP QW10

QC10:
    INC BL
    LEA DX, CORRECT
    MOV AH, 9
    INT 21H
    CALL END_QUIZ

QW10:
    LEA DX, WR10
    MOV AH, 9
    INT 21H   
    CALL END_QUIZ

END_QUIZ:
    MOV DL, 12
    MOV AH, 5
    INT 21H
    
    MOV SI, OFFSET CONG
    MOV CX, OFFSET CONG_END - OFFSET CONG
    
P1:
    MOV DL, [SI]
    MOV AH, 5
    INT 21H
    INC SI
    LOOP P1
    
    MOV SI, OFFSET INPUTSUR
    MOV CL, [INPUTSUR+1]
    XOR CH, CH

P2:
    MOV DL, [SI+2]
    MOV AH, 5
    INT 21H
    INC SI
    LOOP P2

    MOV DL, ' '
    MOV AH, 5
    INT 21H

    MOV SI, OFFSET INPUTFIR
    MOV CL, [INPUTFIR+1]
    XOR CH, CH

P3:
    MOV DL, [SI+2]
    MOV AH, 5
    INT 21H
    INC SI
    LOOP P3
    
    MOV SI, OFFSET PQUIZ
    MOV CX, OFFSET PQUIZ_END - OFFSET PQUIZ
    
P4:
    MOV DL, [SI]
    MOV AH, 5
    INT 21H
    INC SI
    LOOP P4
    
    MOV DL, 10
    INT 21H
    MOV DL, 13
    INT 21H
    
    LEA DX, MESSAGE2
    MOV AH, 9
    INT 21H
    
    ADD BL, 48
    CMP BL, 57
    JG TEN

    MOV AH, 2
    MOV DL, BL
    INT 21H
    CALL EXIT

TEN:
    MOV AH, 2
    MOV DL, '1'
    INT 21H  

    MOV AH, 2
    MOV DL, '0'
    INT 21H
    CALL EXIT

EXIT:
    LEA DX, MESSAGE3
    MOV AH, 9
    INT 21H
    
    MOV AH, 1
    INT 21H
    
    CMP AL, '1'
    JE START
    
    CMP AL, '0'
    JE FINISH 
    JMP EXIT

FINISH: 
    LEA DX, MESSAGE4
    MOV AH, 9
    INT 21H
    
    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN






