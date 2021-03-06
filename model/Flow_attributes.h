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
 * Flow_attributes.h
 * 
 * 
 */

#ifndef Flow_attributes_H_
#define Flow_attributes_H_


#include "ModelBase.h"

#include "DateTime.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Flow_attributes
	: public ModelBase
{
public:
    Flow_attributes();
    virtual ~Flow_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Flow_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    void setDescription(utility::string_t value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProcessId() const;
    void setProcessId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromObjectId() const;
    void setFromObjectId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromObjectType() const;
    void setFromObjectType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getToObjectId() const;
    void setToObjectId(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getToObjectType() const;
    void setToObjectType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
        /// <summary>
    /// 
    /// </summary>
    utility::string_t getCondition() const;
    void setCondition(utility::string_t value);
    bool conditionIsSet() const;
    void unsetCondition();
    /// <summary>
    /// 
    /// </summary>
    bool getDefault() const;
    void setDefault(bool value);
        /// <summary>
    /// 
    /// </summary>
    bool getOptional() const;
    void setOptional(bool value);
        /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getCreatedAt() const;
    void setCreatedAt(std::shared_ptr<DateTime> value);
    bool created_atIsSet() const;
    void unsetCreated_at();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<DateTime> getUpdatedAt() const;
    void setUpdatedAt(std::shared_ptr<DateTime> value);
    bool updated_atIsSet() const;
    void unsetUpdated_at();
    
protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Process_id;
    utility::string_t m_From_object_id;
    utility::string_t m_From_object_type;
    utility::string_t m_To_object_id;
    utility::string_t m_To_object_type;
    utility::string_t m_Type;
    utility::string_t m_Condition;
    bool m_ConditionIsSet;
bool m_Default;
    bool m_Optional;
    std::shared_ptr<DateTime> m_Created_at;
    bool m_Created_atIsSet;
std::shared_ptr<DateTime> m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* Flow_attributes_H_ */
