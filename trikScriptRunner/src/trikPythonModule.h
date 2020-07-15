/* Copyright 2020 CyberTech Labs Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License. */

#pragma once

#include <Python.h>

#include <trikControl/brickInterface.h>
#include <trikNetwork/mailboxInterface.h>

#include "scriptExecutionControl.h"

PyMODINIT_FUNC trikPythonModuleInit();
PyMODINIT_FUNC trikBrickPythonModuleInit();
PyMODINIT_FUNC trikScriptPythonModuleInit();
PyMODINIT_FUNC trikMailboxPythonModuleInit();
void trikPythonModuleSetObjects(trikControl::BrickInterface* brick,
	trikScriptRunner::ScriptExecutionControl* script, trikNetwork::MailboxInterface* mailbox);