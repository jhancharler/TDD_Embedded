/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "mock_MyRCC.h"

static const char* CMockString_MyRCC_GPIOClockEnable = "MyRCC_GPIOClockEnable";
static const char* CMockString_gpio_port = "gpio_port";
static const char* CMockString_reg = "reg";

typedef struct _CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Error_Code_e ReturnVal;
  int CallOrder;
  rcc_register* Expected_reg;
  int Expected_gpio_port;

} CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE;

static struct mock_MyRCCInstance
{
  char MyRCC_GPIOClockEnable_IgnoreBool;
  Error_Code_e MyRCC_GPIOClockEnable_FinalReturn;
  char MyRCC_GPIOClockEnable_CallbackBool;
  CMOCK_MyRCC_GPIOClockEnable_CALLBACK MyRCC_GPIOClockEnable_CallbackFunctionPointer;
  int MyRCC_GPIOClockEnable_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE MyRCC_GPIOClockEnable_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_MyRCC_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.MyRCC_GPIOClockEnable_CallInstance;
  if (Mock.MyRCC_GPIOClockEnable_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_MyRCC_GPIOClockEnable);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void mock_MyRCC_Init(void)
{
  mock_MyRCC_Destroy();
}

void mock_MyRCC_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

Error_Code_e MyRCC_GPIOClockEnable(rcc_register* reg, int gpio_port)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_MyRCC_GPIOClockEnable);
  cmock_call_instance = (CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.MyRCC_GPIOClockEnable_CallInstance);
  Mock.MyRCC_GPIOClockEnable_CallInstance = CMock_Guts_MemNext(Mock.MyRCC_GPIOClockEnable_CallInstance);
  if (Mock.MyRCC_GPIOClockEnable_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.MyRCC_GPIOClockEnable_FinalReturn;
    memcpy((void*)(&Mock.MyRCC_GPIOClockEnable_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(Error_Code_e[sizeof(cmock_call_instance->ReturnVal) == sizeof(Error_Code_e) ? 1 : -1])); /* add Error_Code_e to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.MyRCC_GPIOClockEnable_CallbackBool &&
      Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer != NULL)
  {
    Error_Code_e cmock_cb_ret = Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer(reg, gpio_port, Mock.MyRCC_GPIOClockEnable_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_MyRCC_GPIOClockEnable,CMockString_reg);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_reg), (void*)(reg), sizeof(rcc_register), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_MyRCC_GPIOClockEnable,CMockString_gpio_port);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_gpio_port, gpio_port, cmock_line, CMockStringMismatch);
  }
  if (Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer(reg, gpio_port, Mock.MyRCC_GPIOClockEnable_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_MyRCC_GPIOClockEnable(CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE* cmock_call_instance, rcc_register* reg, int gpio_port);
void CMockExpectParameters_MyRCC_GPIOClockEnable(CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE* cmock_call_instance, rcc_register* reg, int gpio_port)
{
  cmock_call_instance->Expected_reg = reg;
  cmock_call_instance->Expected_gpio_port = gpio_port;
}

void MyRCC_GPIOClockEnable_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, Error_Code_e cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE));
  CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE* cmock_call_instance = (CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.MyRCC_GPIOClockEnable_CallInstance = CMock_Guts_MemChain(Mock.MyRCC_GPIOClockEnable_CallInstance, cmock_guts_index);
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)1;
}

void MyRCC_GPIOClockEnable_CMockStopIgnore(void)
{
  if(Mock.MyRCC_GPIOClockEnable_IgnoreBool)
    Mock.MyRCC_GPIOClockEnable_CallInstance = CMock_Guts_MemNext(Mock.MyRCC_GPIOClockEnable_CallInstance);
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)0;
}

void MyRCC_GPIOClockEnable_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, rcc_register* reg, int gpio_port, Error_Code_e cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE));
  CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE* cmock_call_instance = (CMOCK_MyRCC_GPIOClockEnable_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.MyRCC_GPIOClockEnable_CallInstance = CMock_Guts_MemChain(Mock.MyRCC_GPIOClockEnable_CallInstance, cmock_guts_index);
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_MyRCC_GPIOClockEnable(cmock_call_instance, reg, gpio_port);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(Error_Code_e[sizeof(cmock_to_return) == sizeof(Error_Code_e) ? 1 : -1])); /* add Error_Code_e to :treat_as_array if this causes an error */
}

void MyRCC_GPIOClockEnable_AddCallback(CMOCK_MyRCC_GPIOClockEnable_CALLBACK Callback)
{
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)0;
  Mock.MyRCC_GPIOClockEnable_CallbackBool = (char)1;
  Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer = Callback;
}

void MyRCC_GPIOClockEnable_Stub(CMOCK_MyRCC_GPIOClockEnable_CALLBACK Callback)
{
  Mock.MyRCC_GPIOClockEnable_IgnoreBool = (char)0;
  Mock.MyRCC_GPIOClockEnable_CallbackBool = (char)0;
  Mock.MyRCC_GPIOClockEnable_CallbackFunctionPointer = Callback;
}
