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
 * Instance_attributes.h
 * 
 * 
 */

#ifndef Instance_attributes_H_
#define Instance_attributes_H_


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
class  Instance_attributes
	: public ModelBase
{
public:
    Instance_attributes();
    virtual ~Instance_attributes();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Instance_attributes members
	   
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    void setName(utility::string_t value);
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
    utility::string_t getParentInstanceId() const;
    void setParentInstanceId(utility::string_t value);
    bool parent_instance_idIsSet() const;
    void unsetParent_instance_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInitUserId() const;
    void setInitUserId(utility::string_t value);
    bool init_user_idIsSet() const;
    void unsetInit_user_id();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPin() const;
    void setPin(utility::string_t value);
    bool pinIsSet() const;
    void unsetPin();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDuration() const;
    void setDuration(int32_t value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
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
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
utility::string_t m_Process_id;
    utility::string_t m_Parent_instance_id;
    bool m_Parent_instance_idIsSet;
utility::string_t m_Init_user_id;
    bool m_Init_user_idIsSet;
utility::string_t m_Pin;
    bool m_PinIsSet;
int32_t m_Duration;
    bool m_DurationIsSet;
utility::string_t m_Status;
    std::shared_ptr<DateTime> m_Created_at;
    bool m_Created_atIsSet;
std::shared_ptr<DateTime> m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* Instance_attributes_H_ */
