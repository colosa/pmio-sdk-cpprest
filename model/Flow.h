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

/*
 * Flow.h
 * 
 * 
 */

#ifndef Flow_H_
#define Flow_H_


#include "ModelBase.h"

#include "Flow_attributes.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Flow
	: public ModelBase
{
public:
    Flow();
    virtual ~Flow();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Flow members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Flow_attributes> getAttributes() const;
    void setAttributes(std::shared_ptr<Flow_attributes> value);
    bool attributesIsSet() const;
    void unsetAttributes();
    
protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Type;
    std::shared_ptr<Flow_attributes> m_Attributes;
    bool m_AttributesIsSet;
};

}
}
}
}

#endif /* Flow_H_ */
