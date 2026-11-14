// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00401ee0
// entry: 00401ee0  size: 259


int FUN_00401ee0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_1 % 10000000) % 1000000;
  iVar2 = iVar1 % 100000;
  iVar3 = iVar2 % 10000;
  iVar4 = iVar3 % 1000;
  iVar5 = iVar4 % 100;
  return (((((((param_1 / 10000000) * 0x10 + (param_1 % 10000000) / 1000000) * 0x10 + iVar1 / 100000
             ) * 0x10 + iVar2 / 10000) * 0x10 + iVar3 / 1000) * 0x10 + iVar4 / 100) * 0x10 +
         iVar5 / 10) * 0x10 + iVar5 % 10;
}

