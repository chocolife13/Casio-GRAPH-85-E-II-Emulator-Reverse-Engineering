// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564311
// entry: 00564311  size: 1198


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_00564311(void)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  AFX_MSGMAP_ENTRY *pAVar6;
  DWORD DVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *extraout_ECX;
  undefined4 *puVar10;
  uint uVar11;
  code *pcVar12;
  int unaff_EBP;
  short sVar13;
  undefined4 uVar14;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 == 0x111) {
    iVar3 = (**(code **)(*extraout_ECX + 0x78))
                      (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar3 != 0) {
LAB_00564767:
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto switchD_005644e5_caseD_26;
    }
LAB_0056449a:
    uVar14 = 0;
    goto LAB_0056449c;
  }
  if (iVar3 == 0x4e) {
    if (**(int **)(unaff_EBP + 0x10) != 0) {
      iVar3 = (**(code **)(*extraout_ECX + 0x7c))
                        (*(undefined4 *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                         unaff_EBP + -0x10);
LAB_0056436a:
      if (iVar3 != 0) goto switchD_005644e5_caseD_26;
    }
    goto LAB_0056449a;
  }
  puVar9 = *(undefined4 **)(unaff_EBP + 0x10);
  if (iVar3 == 6) {
    uVar14 = FUN_00563433(puVar9);
    FUN_0056319b(extraout_ECX,*(undefined4 *)(unaff_EBP + 0xc),uVar14);
  }
  sVar13 = (short)puVar9;
  if ((iVar3 == 0x20) &&
     (iVar3 = FUN_005631fc(extraout_ECX,(int)sVar13,(uint)puVar9 >> 0x10), iVar3 != 0))
  goto LAB_00564767;
  uVar4 = (**(code **)(*extraout_ECX + 0x28))();
  *(uint *)(unaff_EBP + -0x14) = uVar4;
  uVar11 = uVar4 & 0x1ff ^ *(uint *)(unaff_EBP + 8) & 0x1ff;
  FUN_00576699(7);
  uVar4 = *(uint *)(unaff_EBP + 8);
  iVar3 = uVar11 * 0xc;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if ((uVar4 != *(uint *)(&DAT_005d3340 + uVar11 * 0xc)) ||
     (iVar5 != *(int *)(&DAT_005d3348 + iVar3))) {
    *(uint *)(&DAT_005d3340 + iVar3) = uVar4;
    *(int *)(&DAT_005d3348 + iVar3) = iVar5;
    if (iVar5 != 0) {
      while( true ) {
        if (uVar4 < 0xc000) {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),uVar4,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_005d3344 + iVar3) = pAVar6;
            FUN_00576709(7);
            iVar3 = *(int *)(unaff_EBP + 0x10);
            goto LAB_005644ba;
          }
        }
        else {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),0xc000,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            while( true ) {
              if (**(int **)(pAVar6 + 0x10) == *(int *)(unaff_EBP + 8)) {
                *(AFX_MSGMAP_ENTRY **)(&DAT_005d3344 + iVar3) = pAVar6;
                FUN_00576709(7);
                iVar3 = *(int *)(unaff_EBP + 0x10);
                goto LAB_0056479d;
              }
              pAVar6 = AfxFindMessageEntry(pAVar6 + 0x18,0xc000,0,0);
              *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
              if (pAVar6 == (AFX_MSGMAP_ENTRY *)0x0) break;
              pAVar6 = *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10);
            }
          }
        }
        iVar5 = **(int **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x14) = iVar5;
        if (iVar5 == 0) break;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = *(uint *)(unaff_EBP + 8);
      }
    }
    *(undefined4 *)(&DAT_005d3344 + iVar3) = 0;
    FUN_00576709(7);
    goto LAB_0056449a;
  }
  iVar3 = *(int *)(&DAT_005d3344 + iVar3);
  *(int *)(unaff_EBP + 0x10) = iVar3;
  FUN_00576709(7);
  if (iVar3 == 0) goto LAB_0056449a;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_0056479d:
    pcVar12 = *(code **)(iVar3 + 0x14);
switchD_005644e5_caseD_a:
    uVar4 = *(uint *)(unaff_EBP + 0xc);
    goto LAB_005647a4;
  }
LAB_005644ba:
  iVar5 = *(int *)(unaff_EBP + 0x10);
  pcVar12 = *(code **)(iVar3 + 0x14);
  iVar3 = *(int *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 8) == 0x1a) {
    DVar7 = GetVersion();
    iVar5 = *(int *)(unaff_EBP + 0x10);
    iVar3 = (-(uint)((byte)DVar7 < 4) & 0xfffffff0) + 0x2f;
  }
  sVar2 = (short)((uint)puVar9 >> 0x10);
  switch(iVar3) {
  case 1:
    puVar9 = (undefined4 *)FUN_00569c60(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_005645f5;
  case 2:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_005645f5;
  case 3:
  case 8:
    uVar4 = (uint)puVar9 >> 0x10;
    uVar11 = (uint)sVar13;
    uVar8 = FUN_00563433(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00564610;
  case 4:
    FUN_00569bbe();
    uVar14 = puVar9[1];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar14;
    FUN_00563012();
    uVar14 = *puVar9;
    uVar1 = puVar9[2];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x44) = uVar14;
    iVar3 = FUN_0056345a(uVar14);
    if (iVar3 == 0) {
      if ((extraout_ECX[0xd] != 0) &&
         (iVar3 = FUN_005621d5(*(undefined4 *)(unaff_EBP + -0x44)), iVar3 != 0)) {
        *(int *)(unaff_EBP + -0x28) = iVar3;
      }
      iVar3 = unaff_EBP + -0x60;
    }
    uVar14 = (*pcVar12)(unaff_EBP + -0x24,iVar3,uVar1);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
    CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_005645cb;
  case 5:
    FUN_00569bbe();
    uVar14 = puVar9[2];
    *(undefined4 *)(unaff_EBP + -0x20) = puVar9[1];
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar14 = (*pcVar12)(unaff_EBP + -0x24,uVar14);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
LAB_005645cb:
    FUN_00569cf3();
    break;
  case 6:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    uVar11 = FUN_00563433(puVar9);
    goto LAB_0056460b;
  case 7:
    puVar9 = (undefined4 *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    uVar4 = (uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_005647a4;
  case 9:
  case 0x2a:
LAB_005645f5:
    uVar14 = (*pcVar12)(puVar9);
LAB_005647a8:
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
    break;
  case 10:
  case 0x21:
    goto switchD_005644e5_caseD_a;
  case 0xb:
    uVar4 = FUN_00567983(puVar9);
    uVar11 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
LAB_0056460b:
    uVar8 = (uint)*(ushort *)(unaff_EBP + 0xc);
LAB_00564610:
    uVar14 = (*pcVar12)(uVar8,uVar11,uVar4);
    goto LAB_005647a8;
  case 0xc:
    (*pcVar12)();
    break;
  case 0xd:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_00564734;
  case 0xe:
  case 0x12:
  case 0x25:
  case 0x2f:
    goto LAB_00564714;
  case 0xf:
    puVar10 = (undefined4 *)(int)sVar2;
    iVar3 = (int)sVar13;
    goto LAB_00564717;
  case 0x10:
  case 0x11:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    goto LAB_00564755;
  case 0x13:
    puVar10 = (undefined4 *)FUN_00563433(*(undefined4 *)(unaff_EBP + 0xc));
    uVar4 = FUN_00563433(puVar9);
    uVar11 = (uint)((undefined4 *)extraout_ECX[7] == puVar9);
    goto LAB_00564759;
  case 0x14:
    puVar9 = (undefined4 *)FUN_00569c60(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00564734;
  case 0x15:
    puVar9 = (undefined4 *)FUN_00567983(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00564734;
  case 0x16:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    uVar11 = FUN_00567983(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00564759;
  case 0x17:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_0056469b;
  case 0x18:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    goto LAB_005646b7;
  case 0x19:
    uVar4 = (uint)sVar13;
    puVar10 = (undefined4 *)(int)sVar2;
LAB_005646b7:
    uVar11 = FUN_00563433(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00564759;
  case 0x1a:
    iVar3 = FUN_00563433(*(undefined4 *)(unaff_EBP + 0xc));
    puVar10 = puVar9;
    goto LAB_00564717;
  case 0x1b:
    puVar9 = (undefined4 *)FUN_00563433(puVar9);
LAB_00564714:
    iVar3 = *(int *)(unaff_EBP + 0xc);
    puVar10 = puVar9;
    goto LAB_00564717;
  case 0x1c:
    puVar10 = (undefined4 *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    uVar4 = FUN_00563433(puVar9);
    goto LAB_00564741;
  case 0x1d:
  case 0x1e:
    iVar3 = (int)(short)*(undefined4 *)(unaff_EBP + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    *(int *)(unaff_EBP + 8) = iVar3;
    puVar10 = (undefined4 *)(int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar10;
    if (iVar5 == 0x1d) {
      puVar10 = (undefined4 *)FUN_00563433(puVar9);
      uVar4 = *(uint *)(unaff_EBP + 0xc);
      uVar11 = *(uint *)(unaff_EBP + 8);
      goto LAB_00564759;
    }
LAB_00564717:
    (*pcVar12)(iVar3,puVar10);
    break;
  case 0x1f:
  case 0x24:
    goto LAB_00564734;
  case 0x20:
  case 0x2b:
    (*pcVar12)(*(undefined4 *)(unaff_EBP + 0xc),puVar9);
    goto LAB_00564767;
  case 0x22:
    uVar4 = (uint)sVar13;
    puVar9 = (undefined4 *)(int)sVar2;
    goto LAB_005647a4;
  case 0x23:
    uVar14 = (*pcVar12)();
    goto LAB_005647a8;
  case 0x2c:
LAB_0056469b:
    puVar9 = (undefined4 *)FUN_00563433(puVar9);
LAB_00564734:
    (*pcVar12)(puVar9);
    break;
  case 0x2d:
    uVar4 = FUN_00563433(*(undefined4 *)(unaff_EBP + 0xc));
LAB_005647a4:
    uVar14 = (*pcVar12)(uVar4,puVar9);
    goto LAB_005647a8;
  case 0x2e:
    iVar3 = (*pcVar12)(*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,
                       (uint)puVar9 & 0xffff,(uint)puVar9 >> 0x10);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    goto LAB_0056436a;
  case 0x30:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    puVar10 = puVar9;
LAB_00564741:
    uVar11 = (uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_00564759;
  case 0x31:
    uVar4 = (uint)sVar13;
    puVar10 = (undefined4 *)(int)sVar2;
LAB_00564755:
    uVar11 = *(uint *)(unaff_EBP + 0xc);
LAB_00564759:
    (*pcVar12)(uVar11,uVar4,puVar10);
  }
switchD_005644e5_caseD_26:
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  uVar14 = 1;
LAB_0056449c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar14;
}

