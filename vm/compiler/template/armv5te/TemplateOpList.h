/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Dalvik opcode list that uses additional templates to complete JIT execution.
 */
#ifndef JIT_TEMPLATE
#define JIT_TEMPLATE(X)
#endif

JIT_TEMPLATE(CMP_LONG)
JIT_TEMPLATE(RETURN)
JIT_TEMPLATE(INVOKE_METHOD_NO_OPT)
JIT_TEMPLATE(INVOKE_METHOD_CHAIN)
JIT_TEMPLATE(CMPG_DOUBLE)
JIT_TEMPLATE(CMPL_DOUBLE)
JIT_TEMPLATE(CMPG_FLOAT)
JIT_TEMPLATE(CMPL_FLOAT)
JIT_TEMPLATE(MUL_LONG)
JIT_TEMPLATE(SHL_LONG)
JIT_TEMPLATE(SHR_LONG)
JIT_TEMPLATE(USHR_LONG)
JIT_TEMPLATE(ADD_FLOAT_VFP)
JIT_TEMPLATE(SUB_FLOAT_VFP)
JIT_TEMPLATE(MUL_FLOAT_VFP)
JIT_TEMPLATE(DIV_FLOAT_VFP)
JIT_TEMPLATE(ADD_DOUBLE_VFP)
JIT_TEMPLATE(SUB_DOUBLE_VFP)
JIT_TEMPLATE(MUL_DOUBLE_VFP)
JIT_TEMPLATE(DIV_DOUBLE_VFP)
JIT_TEMPLATE(DOUBLE_TO_FLOAT_VFP)
JIT_TEMPLATE(DOUBLE_TO_INT_VFP)
JIT_TEMPLATE(FLOAT_TO_DOUBLE_VFP)
JIT_TEMPLATE(FLOAT_TO_INT_VFP)
JIT_TEMPLATE(INT_TO_DOUBLE_VFP)
JIT_TEMPLATE(INT_TO_FLOAT_VFP)
JIT_TEMPLATE(CMPG_DOUBLE_VFP)
JIT_TEMPLATE(CMPL_DOUBLE_VFP)
JIT_TEMPLATE(CMPG_FLOAT_VFP)
JIT_TEMPLATE(CMPL_FLOAT_VFP)
