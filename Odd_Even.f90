! odd or even number

program ODD_EVEN
	INTEGER N
	READ*, N
	IF(MOD(N, 2).EQ.0) THEN
	PRINT*, 'NUMBER IS EVEN'
	ELSE
	PRINT*, 'NUMBER IS ODD'
	END IF
	stop
end
