// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532af0
// entry: 00532af0  size: 565


void FUN_00532af0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined4 unaff_EBX;
  int iVar5;
  int iVar6;
  undefined1 local_6;
  undefined1 local_5;
  undefined4 local_4;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    bVar3 = (byte)((uint)param_1 >> 0x10);
    if (bVar3 < 9) {
      switch(param_4 & 0xff) {
      case 8:
        local_6 = 0x28;
        break;
      case 9:
        local_6 = 0x29;
        break;
      default:
        goto switchD_00532b2f_caseD_a;
      case 0xb:
        local_6 = 0x7b;
        break;
      case 0xc:
        local_6 = 0x7d;
        break;
      case 0xd:
        local_6 = 0x5b;
        break;
      case 0xe:
        local_6 = 0x5d;
      }
      local_5 = 0;
      FUN_00532620(&local_6,param_2,param_3);
      return;
    }
    cVar1 = FUN_00532a90(param_4);
    if (cVar1 == '\0') {
      iVar6 = param_2 + 3;
    }
    else {
      iVar6 = param_2 + 2;
    }
    iVar5 = (param_4 & 0xff) - 8;
    cVar1 = (char)((uint)param_1 >> 0x18);
    switch(iVar5) {
    case 0:
    case 1:
      cVar1 = cVar1 + (char)param_3 + -2;
      param_2 = CONCAT31(param_2._1_3_,cVar1);
      param_3 = CONCAT31(param_3._1_3_,(cVar1 - bVar3) + '\x06');
      FUN_005324d0(iVar6,param_3,param_2);
      iVar5 = 2;
      do {
        if ((char)param_4 == '\b') {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + 0xffff;
        }
        param_3 = CONCAT31(param_3._1_3_,(char)param_3 + -1);
        FUN_00532590(iVar6,param_3);
        cVar1 = cVar1 + '\x01';
        param_2 = CONCAT31(param_2._1_3_,cVar1);
        FUN_00532590(iVar6,param_2);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    case 3:
    case 4:
      local_4 = CONCAT31(local_4._1_3_,(char)param_3);
      cVar1 = cVar1 + (char)param_3;
      cVar4 = cVar1 + -1;
      param_2 = CONCAT31(param_2._1_3_,cVar4);
      cVar4 = cVar4 - bVar3;
      cVar2 = (char)param_3 + -1;
      param_3 = CONCAT31(param_3._1_3_,cVar4 + '\x04');
      FUN_005324d0(iVar6,param_3,CONCAT31((int3)((uint)iVar5 >> 8),cVar2));
      FUN_005324d0(iVar6,CONCAT31(param_2._1_3_,(char)local_4 + '\x01'),param_2);
      if ((char)param_4 == '\v') {
        FUN_00532590(iVar6 + -1,local_4);
        iVar6 = iVar6 + 1;
      }
      else {
        FUN_00532590(iVar6 + 1,local_4);
        iVar6 = iVar6 + 0xffff;
      }
      FUN_00532590(iVar6,CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),param_1._2_2_) >>
                                        8),cVar4 + '\x03'));
      FUN_00532590(iVar6,cVar1);
      return;
    case 5:
    case 6:
      param_2 = CONCAT31(param_2._1_3_,cVar1 + (char)param_3);
      param_3 = CONCAT31(param_3._1_3_,((cVar1 + (char)param_3) - bVar3) + '\x02');
      FUN_005324d0(iVar6,param_3,param_2);
      iVar5 = 2;
      do {
        if ((char)param_4 == '\r') {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + 0xffff;
        }
        FUN_00532590(iVar6,param_3);
        FUN_00532590(iVar6,param_2);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
switchD_00532b2f_caseD_a:
  return;
}

