// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495a60
// entry: 00495a60  size: 82


undefined4 __thiscall FUN_00495a60(undefined2 param_1,undefined4 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = (uint)CONCAT12(0x30,param_1);
  while( true ) {
    FUN_004fe330((int)&uStack_4 + 2,&param_2);
    if ((((uStack_4 & 0x800000) != 0) && ((uStack_4._2_1_ < 0xe5 || (0xe7 < uStack_4._2_1_)))) ||
       ((0x19 < uStack_4._2_1_ && ((uStack_4._2_1_ < 0x20 || (uStack_4._2_1_ == 0x7f)))))) break;
    if (uStack_4._2_1_ == 0) {
      return 1;
    }
  }
  return 0;
}

