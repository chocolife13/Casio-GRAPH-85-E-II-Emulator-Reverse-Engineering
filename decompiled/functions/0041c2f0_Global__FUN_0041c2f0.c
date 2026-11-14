// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c2f0
// entry: 0041c2f0  size: 93


undefined4 FUN_0041c2f0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int local_4;
  
  bVar3 = 0;
  local_4 = 0;
  do {
    uVar1 = (&DAT_0057ddf4)[param_1 & 0xffff];
    iVar2 = FUN_00419860(uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0041c1e0(uVar1,&local_4);
      if ((-1 < iVar2) && (local_4 == 0x10000)) {
        return 1;
      }
    }
    bVar3 = bVar3 + 1;
    if (2 < bVar3) {
      return 0;
    }
  } while( true );
}

