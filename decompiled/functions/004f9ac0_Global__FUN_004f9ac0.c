// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9ac0
// entry: 004f9ac0  size: 36


bool FUN_004f9ac0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == ')') {
    return true;
  }
  if (cVar1 == ']') {
    return true;
  }
  return cVar1 == '}';
}

