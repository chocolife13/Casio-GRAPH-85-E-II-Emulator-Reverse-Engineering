// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c383
// entry: 0056c383  size: 321


int * __thiscall FUN_0056c383(int param_1,char *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char *lpString2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  CHAR *pCVar9;
  CHAR *pCVar10;
  undefined4 uVar11;
  CHAR local_318 [260];
  CHAR local_214 [260];
  CHAR local_110 [260];
  int *local_c;
  int *local_8;
  
  iVar7 = 0;
  puVar8 = *(undefined4 **)(param_1 + 8);
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  lpString2 = param_2;
  if (*param_2 == '\"') {
    lpString2 = param_2 + 1;
  }
  lstrcpynA(local_214,lpString2,0x104);
  puVar3 = (undefined1 *)FUN_00556082(local_214,0x22);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  FUN_00569123(local_110,local_214);
  pCVar10 = local_318;
  uVar11 = 0x104;
  pCVar9 = local_110;
  uVar4 = FUN_00552b70(pCVar9,pCVar10,0x104);
  iVar5 = FUN_00569001(uVar4,pCVar9,pCVar10,uVar11);
  if (iVar5 != 0) {
    lstrcpyA(local_110,local_318);
  }
  do {
    if (puVar8 == (undefined4 *)0x0) break;
    puVar1 = (undefined4 *)*puVar8;
    piVar6 = (int *)puVar8[2];
    iVar5 = (**(code **)(*piVar6 + 0x68))(local_110,&local_8);
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
      local_c = piVar6;
    }
    puVar8 = puVar1;
  } while (iVar5 != 5);
  if (local_8 == (int *)0x0) {
    if (local_c == (int *)0x0) {
      FUN_0056e108(0xf101,0,0xffffffff);
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)(**(code **)(*local_c + 0x80))(local_110,1);
    }
  }
  else {
    param_2 = (char *)(**(code **)(*local_8 + 0x60))();
    if (param_2 != (char *)0x0) {
      (**(code **)(*local_8 + 100))(&param_2);
      piVar6 = (int *)FUN_005649b3();
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xcc))(0xffffffff);
      }
      iVar7 = FUN_0057497f();
      piVar2 = *(int **)(*(int *)(iVar7 + 4) + 0x1c);
      if (piVar6 != piVar2) {
        (**(code **)(*piVar2 + 0xcc))(0xffffffff);
      }
    }
  }
  return local_8;
}

