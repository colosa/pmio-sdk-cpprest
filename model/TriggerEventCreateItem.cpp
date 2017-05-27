/**
 * ProcessMaker API
 * This ProcessMaker Core API provide access to the new generation engine with BPMN 2.0 support. The current Alpha 1.0 version supports  the part of BPM system functionality like process import, process execution, task assignment
 *
 * OpenAPI spec version: 1.0.0
 * Contact: alpha-program@processmaker.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "TriggerEventCreateItem.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

TriggerEventCreateItem::TriggerEventCreateItem()
{
    
}

TriggerEventCreateItem::~TriggerEventCreateItem()
{
}

void TriggerEventCreateItem::validate() 
{
    // TODO: implement validation
}

web::json::value TriggerEventCreateItem::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("data")] = ModelBase::toJson(m_Data);
    

    return val;
}

void TriggerEventCreateItem::fromJson(web::json::value& val)
{
    std::shared_ptr<DataModel> newData(new DataModel());
    newData->fromJson(val[U("data")]);
    setData( newItem );
    
}

void TriggerEventCreateItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	m_Data->toMultipart(multipart, U("data."));
    
}

void TriggerEventCreateItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    std::shared_ptr<DataModel> newData(new DataModel());
    newData->fromMultiPart(multipart, U("data."));
    setData( newData );
    
}
    
   
std::shared_ptr<DataModel> TriggerEventCreateItem::getData() const
{
	return m_Data;
}
void TriggerEventCreateItem::setData(std::shared_ptr<DataModel> value)
{
	m_Data = value;
    
}

}
}
}
}

