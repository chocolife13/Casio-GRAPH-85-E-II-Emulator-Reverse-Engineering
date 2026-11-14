// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532770
// entry: 00532770  size: 84


void __thiscall FUN_00532770(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined2 uVar5;
  int iVar4;
  int iVar6;
  undefined4 unaff_EDI;
  
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  iVar6 = CONCAT22((short)((uint)param_1 >> 0x10),(ushort)*(byte *)(param_2 + 2)) -
          CONCAT22(uVar5,(ushort)*(byte *)(param_2 + 3));
  if ((short)iVar6 < 0) {
    iVar6 = 0;
  }
  iVar1 = CONCAT22((short)((uint)unaff_EDI >> 0x10),param_3._2_2_ >> 8);
  iVar4 = (CONCAT22(uVar5,param_3._2_2_) & 0xffff00ff) - iVar1;
  if ((short)iVar4 < 0) {
    iVar4 = 0;
  }
  cVar2 = FUN_005321d0(iVar6,iVar4);
  cVar3 = FUN_005321d0(*(undefined1 *)(param_2 + 3),iVar1);
  *(char *)(param_2 + 3) = cVar3;
  *(char *)(param_2 + 2) = cVar3 + cVar2;
  return;
}

