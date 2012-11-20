/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONTENTMETADATA_H_
#define CONTENTMETADATA_H_
#include <vector>
#include <string>

namespace kdo
{

/**
 * \brief The metadata of a Content item.
 */
class ContentMetadata
{
public:
    ContentMetadata();
    virtual ~ContentMetadata();
    std::string getCategory() const;
    void setCategory(std::string category);
    std::vector<std::string> getContributor() const;
    void setContributor(std::vector<std::string> contributor);
    std::vector<std::string> getCoverage() const;
    void setCoverage(std::vector<std::string> coverage);
    std::vector<std::string> getCreator() const;
    void setCreator(std::vector<std::string> creator);
    std::string getDate() const;
    void setDate(std::string date);
    std::vector<std::string> getDescription() const;
    void setDescription(std::vector<std::string> description);
    std::string getFormat() const;
    void setFormat(std::string format);
    std::string getIdentifier() const;
    void setIdentifier(std::string identifier);
    std::vector<std::string> getNarrator() const;
    void setNarrator(std::vector<std::string> narrator);
    std::string getPublisher() const;
    void setPublisher(std::string publisher);
    std::vector<std::string> getRelations() const;
    void setRelations(std::vector<std::string> relations);
    bool isRequiresReturn() const;
    void setRequiresReturn(bool requiresReturn);
    std::vector<std::string> getRights() const;
    void setRights(std::vector<std::string> rights);
    std::string getSample() const;
    void setSample(std::string sample);
    int getSize() const;
    void setSize(int size);
    std::string getSource() const;
    void setSource(std::string source);
    std::string getTitle() const;
    void setTitle(std::string title);
    std::vector<std::string> getTypes() const;
    void setTypes(std::vector<std::string> types);
    std::vector<std::string> getSubjects() const;
    void setSubjects(std::vector<std::string> subjects);
    std::vector<std::string> getLanguages() const;
    void setLanguages(std::vector<std::string> languages);
    bool hasCategory() const;
    bool hasDate() const;
    bool hasPublisher() const;
    bool hasSample() const;
    bool hasSource() const;
private:
    bool requiresReturn_;
    std::string identifier_;
    bool hasSample_;
    std::string sample_;
    bool hasCategory_;
    std::string category_;
    int size_;
    std::string title_;
    bool hasPublisher_;
    std::string publisher_;
    std::string format_;
    bool hasDate_;
    std::string date_;
    bool hasSource_;
    std::string source_;
    std::vector<std::string> types_;
    std::vector<std::string> rights_;
    std::vector<std::string> relations_;
    std::vector<std::string> subjects_;
    std::vector<std::string> description_;
    std::vector<std::string> creator_;
    std::vector<std::string> coverage_;
    std::vector<std::string> contributor_;
    std::vector<std::string> narrator_;
    std::vector<std::string> languages_;
};

} /* namespace kdo */
#endif /* CONTENTMETADATA_H_ */
