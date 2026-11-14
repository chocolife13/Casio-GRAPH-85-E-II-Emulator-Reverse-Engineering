// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517320
// entry: 00517320  size: 61


int FUN_00517320(int param_1)

{
  char cVar1;
  undefined1 local_c [12];
  
  FUN_0055c2fe(param_1,local_c,10);
  cVar1 = FUN_004ad2a0(2,local_c,&param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  return param_1 + -4;
}

