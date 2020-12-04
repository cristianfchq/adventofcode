$a = Get-Content .\inputRaw.txt

$b = $a -replace "^", '{'

$b > inputMadeObject.txt