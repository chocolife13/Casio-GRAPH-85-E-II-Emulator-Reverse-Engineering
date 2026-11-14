// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055332b
// entry: 0055332b  size: 78


int FUN_0055332b(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  size_t sVar3;
  
  sVar1 = _strlen(param_1);
  FUN_005572ad(param_2);
  uVar2 = FUN_00557351(param_2);
  sVar3 = FUN_00557408(param_1,1,sVar1,param_2);
  FUN_005573de(uVar2,param_2);
  FUN_005572ff(param_2);
  return (sVar3 == sVar1) - 1;
}

