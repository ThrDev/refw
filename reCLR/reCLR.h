#pragma once

#include "CLRParameters.h"

using namespace System;

namespace reCLR {
	public ref class Loader {
	public:
		static int CreateProcessAndInject(String^ process_name, String^ command_line, String^ assembly, bool display_errors);
		static int CreateProcessAndInject(String^ process_name, String^ command_line, String^ assembly, String^ assembly_args, bool display_errors);
		static void LoadAssemblyInDomain(String^ assembly_path, String^ assembly_args);
	};
}
