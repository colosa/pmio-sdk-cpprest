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



#include "BpmnFile_attributes.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BpmnFile_attributes::BpmnFile_attributes()
{
    m_Bpmn = U("");
    
}

BpmnFile_attributes::~BpmnFile_attributes()
{
}

void BpmnFile_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value BpmnFile_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("bpmn")] = ModelBase::toJson(m_Bpmn);
    

    return val;
}

void BpmnFile_attributes::fromJson(web::json::value& val)
{
    setBpmn(ModelBase::stringFromJson(val[U("bpmn")]));
    
}

void BpmnFile_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("bpmn"), m_Bpmn));
    
}

void BpmnFile_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setBpmn(ModelBase::stringFromHttpContent(multipart->getContent(U("bpmn"))));
    
}
    
   
utility::string_t BpmnFile_attributes::getBpmn() const
{
	return m_Bpmn;
}
void BpmnFile_attributes::setBpmn(utility::string_t value)
{
	m_Bpmn = value;
    
}

}
}
}
}

