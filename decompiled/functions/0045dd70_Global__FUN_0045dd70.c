// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045dd70
// entry: 0045dd70  size: 709


int FUN_0045dd70(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short asStackY_107ce [32691];
  undefined1 *puVar7;
  short local_82e;
  int local_82c;
  int local_828;
  int local_824;
  int local_820;
  int local_81c;
  undefined1 local_818 [12];
  undefined1 local_80c [12];
  undefined1 local_800 [12];
  undefined1 local_7f4 [12];
  undefined1 local_7e8 [12];
  undefined1 local_7dc [12];
  undefined1 local_7d0 [2];
  short asStack_7ce [999];
  
  FUN_004e5780(local_7f4);
  FUN_004e57a0(local_818);
  FUN_004e7730(local_818,local_800);
  sVar1 = FUN_0045c8d0(param_1,param_2,&local_82e,&local_828,&local_82c);
  if (sVar1 != 0) {
    return (int)sVar1;
  }
  local_820 = local_828 * local_82c;
  sVar1 = (short)local_820;
  if (local_82e == sVar1) {
    *(undefined4 *)(param_2 + 0x10) = 1;
    sVar1 = 3;
    goto LAB_0045e009;
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (local_82e < sVar1) {
    sVar1 = 9;
    goto LAB_0045e009;
  }
  iVar6 = (int)sVar1;
  local_81c = iVar6;
  sVar1 = FUN_0047cbb0(0x6a,iVar6);
  if (sVar1 != 0) goto LAB_0045e009;
  sVar1 = FUN_0047cbb0(0x6b,iVar6);
  if (sVar1 == 0) {
    sVar1 = FUN_0047ccf0(0x29,(int)local_82e,iVar6);
    if (sVar1 == 0) {
      local_824 = 0;
      if (0 < local_82e) {
        do {
          iVar6 = (short)local_824 + 1;
          sVar1 = FUN_0047cac0(0x67,iVar6,local_80c);
          if ((sVar1 != 0) || (sVar1 = FUN_0047cac0(0x68,iVar6,local_7e8), sVar1 != 0))
          goto LAB_0045dff4;
          uVar2 = FUN_004e50a0(local_80c);
          uVar3 = FUN_004e50a0(local_7e8);
          sVar1 = FUN_0047ccc0(0x29,iVar6,1,local_818);
          if ((sVar1 != 0) ||
             (sVar1 = FUN_0045c260(uVar2,uVar3,local_828,local_82c,local_7d0), sVar1 != 0))
          goto LAB_0045dff4;
          sVar4 = 0;
          sVar5 = (short)local_820 + -1;
          if (0 < sVar5) {
            do {
              if (asStack_7ce[sVar4] == -1) {
                puVar7 = local_800;
              }
              else if (asStack_7ce[sVar4] == 1) {
                puVar7 = local_818;
              }
              else {
                puVar7 = local_7f4;
              }
              sVar1 = FUN_0047ccc0(0x29,iVar6,sVar4 + 2,puVar7);
              if (sVar1 != 0) goto LAB_0045dff4;
              sVar4 = sVar4 + 1;
            } while (sVar4 < sVar5);
          }
          sVar1 = FUN_0052f820();
          if (sVar1 == 1) goto LAB_0045dff4;
          local_824 = local_824 + 1;
          iVar6 = local_81c;
        } while ((short)local_824 < local_82e);
      }
      sVar1 = FUN_00462770(0x29,0x6a,1,iVar6);
      if ((sVar1 == 0) &&
         (sVar1 = FUN_00462d80(0x29,0x6a,0x69,1,iVar6,local_7dc,1,0x6b,0,0), sVar1 == 0)) {
        FUN_0047cac0(0x6b,1,local_80c);
        FUN_0047cd10(0x29);
        sVar1 = FUN_0045c3a0(0x6b,(int)(short)local_828,(int)(short)local_82c,0);
        if (sVar1 != 0) goto LAB_0045dffe;
        sVar1 = 0;
      }
    }
LAB_0045dff4:
    FUN_0047cd10(0x29);
  }
LAB_0045dffe:
  FUN_0047cc00(0x6b);
LAB_0045e009:
  FUN_0047cc00(0x6a);
  FUN_0047cc00(0x69);
  FUN_0047cc00(0x68);
  FUN_0047cc00(0x67);
  return (int)sVar1;
}

