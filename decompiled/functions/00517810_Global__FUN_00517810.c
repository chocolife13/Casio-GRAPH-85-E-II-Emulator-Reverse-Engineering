// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517810
// entry: 00517810  size: 100


undefined4 FUN_00517810(undefined4 param_1,undefined4 param_2,char param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_004ad2a0(param_1,param_2,&param_1);
  if (cVar1 == '\0') {
    FUN_004ad3f0(3,1,&param_2);
    if (param_3 == '\0') {
      bVar2 = (byte)param_2 & ~param_4;
    }
    else {
      bVar2 = (byte)param_2 | param_4;
    }
    param_2 = CONCAT31(param_2._1_3_,bVar2);
    FUN_004ac2f0(1,&param_2,2);
  }
  return 0;
}

