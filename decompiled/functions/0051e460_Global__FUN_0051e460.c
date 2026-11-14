// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e460
// entry: 0051e460  size: 763


undefined4 FUN_0051e460(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [24];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [72];
  
  FUN_00515e10(local_84);
  switch(param_1) {
  case 0x7542:
    FUN_004e6b80(local_48,local_54,local_9c);
    FUN_004e7910(local_9c,local_9c);
    uVar1 = FUN_004e5070(0x3e,local_90,local_9c);
    FUN_004e6dd0(local_9c,uVar1);
    FUN_004e7910(local_9c,local_9c);
    uVar1 = FUN_004e5070(0xc,local_90,local_9c);
    FUN_004e6d00(local_9c,uVar1);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e6a00(local_54,local_9c,local_54);
    FUN_004e7910(local_54,local_54);
    FUN_004e6a00(local_48,local_9c,local_48);
    puVar4 = local_48;
    puVar3 = local_48;
    break;
  default:
    goto switchD_0051e489_caseD_7543;
  case 0x7544:
    uVar1 = FUN_004e5070(0xc,local_90,local_9c);
    FUN_004e6d00(local_60,uVar1);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e6b80(local_84,local_9c,local_84);
    FUN_004e7910(local_84,local_84);
    FUN_004e6b80(local_78,local_9c,local_78);
    goto LAB_0051e703;
  case 0x7545:
    uVar1 = FUN_004e5070(0xc,local_90,local_9c);
    FUN_004e6d00(local_60,uVar1);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e6a00(local_84,local_9c,local_84);
    FUN_004e7910(local_84,local_84);
    FUN_004e6a00(local_78,local_9c,local_78);
LAB_0051e703:
    puVar4 = local_78;
    puVar3 = local_78;
    break;
  case 0x7547:
    FUN_004e6b80(local_48,local_54,local_9c);
    FUN_004e7910(local_9c,local_9c);
    uVar1 = FUN_004e5070(0x3e,local_90,local_9c);
    FUN_004e6dd0(local_9c,uVar1);
    FUN_004e7910(local_9c,local_9c);
    uVar1 = FUN_004e5070(0xc,local_90,local_9c);
    FUN_004e6d00(local_9c,uVar1);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e6b80(local_54,local_9c,local_54);
    FUN_004e7910(local_54,local_54);
    FUN_004e6b80(local_48,local_9c,local_48);
    puVar4 = local_48;
    puVar3 = local_48;
  }
  FUN_004e7910(puVar3,puVar4);
switchD_0051e489_caseD_7543:
  iVar2 = FUN_0051c300(local_84);
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    return 1;
  }
  FUN_00515e50(local_84);
  FUN_00516ae0();
  FUN_00517ee0();
  return 0;
}

