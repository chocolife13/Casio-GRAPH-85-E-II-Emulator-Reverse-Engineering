// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517210
// entry: 00517210  size: 53


uint FUN_00517210(uint param_1)

{
  char cVar1;
  undefined1 local_c [12];
  
  FUN_0055c2fe(param_1,local_c,10);
  cVar1 = FUN_004ad2a0(2,local_c,&param_1);
  return ~-(uint)(cVar1 != '\0') & param_1;
}

