
#pragma once

#include <nlohmann/json.hpp>

namespace adm
{
	using json = nlohmann::json;

	inline json ParseJSON( StringView path )
	{
		std::ifstream file( path.data() );
		if ( !file )
		{
			return {};
		}

		return json::parse( file, nullptr, true, true );
	}
}
