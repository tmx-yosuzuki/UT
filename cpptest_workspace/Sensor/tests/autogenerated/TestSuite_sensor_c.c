#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

#if CPPTEST_CUBESUITE
//CPPTEST_CONTEXT("/Sensor/sensor.c");
#else
CPPTEST_CONTEXT("/Sensor/sensor.c");
#endif
#if CPPTEST_CUBESUITE
//CPPTEST_TEST_SUITE_INCLUDED_TO("/Sensor/sensor.c");
#else
CPPTEST_TEST_SUITE_INCLUDED_TO("/Sensor/sensor.c");
#endif

EXTERN_C_LINKAGE void TestSuite_sensor_c_acb6c5cb_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sensor_c_acb6c5cb_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_sensor_c_acb6c5cb);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_sensor_c_acb6c5cb_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_sensor_c_acb6c5cb_testSuiteTearDown);
CPPTEST_TEST_DS(TestSuite_sensor_c_acb6c5cb_test_case, CPPTEST_DS("__ds_step_autogen_b9a0fabd_19c9dd91c86"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_sensor_c_acb6c5cb_test_case(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_sensor_c_acb6c5cb);

void TestSuite_sensor_c_acb6c5cb_testSuiteSetUp(void);
void TestSuite_sensor_c_acb6c5cb_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_sensor_c_acb6c5cb_testSuiteTearDown(void);
void TestSuite_sensor_c_acb6c5cb_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_sensor_c_acb6c5cb_setUp(void);
void TestSuite_sensor_c_acb6c5cb_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_sensor_c_acb6c5cb_tearDown(void);
void TestSuite_sensor_c_acb6c5cb_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT int mytest(int) */
void TestSuite_sensor_c_acb6c5cb_test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" uid="0" version="2">
            <row>
                <val>V#I#_val</val>
                <val>A#I#_return</val>
            </row>
            <row>
                <val>0</val>
                <val>0</val>
            </row>
            <row>
                <val>1</val>
                <val>1</val>
            </row>
            <row>
                <val>2</val>
                <val>2</val>
            </row>
            <row>
                <val>3</val>
                <val>3</val>
            </row>
            <row>
                <val>4</val>
                <val>5</val>
            </row>
            <ext>false</ext>
            <extname/>
        </step>
        <step id="MultiVariableStep" uid="1" version="1">
            <step id="VariableStep" version="1">
                <name>_val</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_val")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="CallStep" uid="2" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>mytest</name>
            <params>_val</params>
        </step>
        <step id="AssertionsStep" uid="3" version="1">
            <step id="AssertionStep" uid="3.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("A#I#_return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _val = CPPTEST_DS_GET_INTEGER("V#I#_val");
int _return;
/* CPPTEST_TC_STEP_UID:2 */
_return = mytest(_val);
/* CPPTEST_TC_STEP_UID:3.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("A#I#_return"), _return);
}
/* CPPTEST_TEST_CASE_END test_case */
